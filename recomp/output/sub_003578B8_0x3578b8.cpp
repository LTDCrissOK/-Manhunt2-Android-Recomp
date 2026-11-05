#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003578B8
// Address: 0x3578b8 - 0x357a60
void sub_003578B8_0x3578b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003578B8_0x3578b8");
#endif

    switch (ctx->pc) {
        case 0x357900u: goto label_357900;
        case 0x357914u: goto label_357914;
        case 0x357920u: goto label_357920;
        case 0x357958u: goto label_357958;
        case 0x357964u: goto label_357964;
        case 0x3579a0u: goto label_3579a0;
        case 0x3579b0u: goto label_3579b0;
        case 0x3579c4u: goto label_3579c4;
        case 0x3579ecu: goto label_3579ec;
        case 0x3579fcu: goto label_3579fc;
        case 0x357a10u: goto label_357a10;
        default: break;
    }

    ctx->pc = 0x3578b8u;

    // 0x3578b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3578b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3578bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3578bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3578c0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3578c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3578c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3578c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3578c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3578cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3578ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3578d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3578d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3578d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3578d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3578d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3578d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3578dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3578dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3578e0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x3578e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x3578e4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3578e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3578e8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3578e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3578ec: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3578ECu;
    {
        const bool branch_taken_0x3578ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3578F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578ECu;
        // 0x3578f0: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3578ec) {
            ctx->pc = 0x357A2Cu;
            goto label_357a2c;
        }
    }
    ctx->pc = 0x3578F4u;
    // 0x3578f4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x3578f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x3578f8: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x3578F8u;
    SET_GPR_U32(ctx, 31, 0x357900u);
    ctx->pc = 0x3578FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3578F8u;
    // 0x3578fc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x3578F8u, 0x357900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357900u;
label_357900:
    // 0x357900: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x357900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357904: 0x12c0004a  beqz        $s6, . + 4 + (0x4A << 2)
    ctx->pc = 0x357904u;
    {
        const bool branch_taken_0x357904 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x357908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357904u;
        // 0x357908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357904) {
            ctx->pc = 0x357A30u;
            goto label_357a30;
        }
    }
    ctx->pc = 0x35790Cu;
    // 0x35790c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x35790Cu;
    SET_GPR_U32(ctx, 31, 0x357914u);
    ctx->pc = 0x357910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35790Cu;
    // 0x357910: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x35790Cu, 0x357914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357914u;
label_357914:
    // 0x357914: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x357914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x357918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35791c: 0x0  nop
    ctx->pc = 0x35791cu;
    // NOP
label_357920:
    // 0x357920: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x357920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x357924: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x357924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x357928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x357928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35792c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357930: 0x2ca4000e  sltiu       $a0, $a1, 0xE
    ctx->pc = 0x357930u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x357934: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x357934u;
    {
        const bool branch_taken_0x357934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x357938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357934u;
        // 0x357938: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357934) {
            ctx->pc = 0x357920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357920;
        }
    }
    ctx->pc = 0x35793Cu;
    // 0x35793c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x357940: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x357940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x357944: 0x2455caa8  addiu       $s5, $v0, -0x3558
    ctx->pc = 0x357944u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953640));
    // 0x357948: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x357948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35794c: 0x3c1e0049  lui         $fp, 0x49
    ctx->pc = 0x35794cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)73 << 16));
    // 0x357950: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x357950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357954: 0x0  nop
    ctx->pc = 0x357954u;
    // NOP
label_357958:
    // 0x357958: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x357958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35795c: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x35795Cu;
    SET_GPR_U32(ctx, 31, 0x357964u);
    ctx->pc = 0x357960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35795Cu;
    // 0x357960: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x35795Cu, 0x357964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357964u;
label_357964:
    // 0x357964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357968: 0x5620001a  bnel        $s1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x357968u;
    {
        const bool branch_taken_0x357968 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x357968) {
            ctx->pc = 0x35796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357968u;
            // 0x35796c: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3579D4u;
            goto label_3579d4;
        }
    }
    ctx->pc = 0x357970u;
    // 0x357970: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x357970u;
    {
        const bool branch_taken_0x357970 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x357974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357970u;
        // 0x357974: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357970) {
            ctx->pc = 0x3579BCu;
            goto label_3579bc;
        }
    }
    ctx->pc = 0x357978u;
    // 0x357978: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x357978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x35797c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357980: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357980u;
    {
        const bool branch_taken_0x357980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357980) {
            ctx->pc = 0x357990u;
            goto label_357990;
        }
    }
    ctx->pc = 0x357988u;
    // 0x357988: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x357988u;
    {
        const bool branch_taken_0x357988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357988u;
        // 0x35798c: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357988) {
            ctx->pc = 0x3579D0u;
            goto label_3579d0;
        }
    }
    ctx->pc = 0x357990u;
label_357990:
    // 0x357990: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x357990u;
    {
        const bool branch_taken_0x357990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x357994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357990u;
        // 0x357994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357990) {
            ctx->pc = 0x3579BCu;
            goto label_3579bc;
        }
    }
    ctx->pc = 0x357998u;
    // 0x357998: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x357998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x35799c: 0x0  nop
    ctx->pc = 0x35799cu;
    // NOP
label_3579a0:
    // 0x3579a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3579a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3579a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3579a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3579a8: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x3579A8u;
    SET_GPR_U32(ctx, 31, 0x3579B0u);
    ctx->pc = 0x3579ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579A8u;
    // 0x3579ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x3579A8u, 0x3579B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579B0u;
label_3579b0:
    // 0x3579b0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3579b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3579b4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3579B4u;
    {
        const bool branch_taken_0x3579b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3579b4) {
            ctx->pc = 0x3579B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3579B4u;
            // 0x3579b8: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3579A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3579a0;
        }
    }
    ctx->pc = 0x3579BCu;
label_3579bc:
    // 0x3579bc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3579BCu;
    SET_GPR_U32(ctx, 31, 0x3579C4u);
    ctx->pc = 0x3579C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579BCu;
    // 0x3579c0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3579BCu, 0x3579C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579C4u;
label_3579c4:
    // 0x3579c4: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3579c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x3579c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3579C8u;
    {
        const bool branch_taken_0x3579c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579C8u;
        // 0x3579cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579c8) {
            ctx->pc = 0x357A30u;
            goto label_357a30;
        }
    }
    ctx->pc = 0x3579D0u;
label_3579d0:
    // 0x3579d0: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x3579d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3579d4:
    // 0x3579d4: 0x27c4f1b0  addiu       $a0, $fp, -0xE50
    ctx->pc = 0x3579d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294963632));
    // 0x3579d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3579d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3579dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3579dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3579e0: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x3579e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3579e4: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3579E4u;
    SET_GPR_U32(ctx, 31, 0x3579ECu);
    ctx->pc = 0x3579E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579E4u;
    // 0x3579e8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3579E4u, 0x3579ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579ECu;
label_3579ec:
    // 0x3579ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3579ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3579f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579f4: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x3579F4u;
    SET_GPR_U32(ctx, 31, 0x3579FCu);
    ctx->pc = 0x3579F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579F4u;
    // 0x3579f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x3579F4u, 0x3579FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579FCu;
label_3579fc:
    // 0x3579fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3579fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x357a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a04: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x357a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x357a08: 0xc0d5e2a  jal         func_3578A8
    ctx->pc = 0x357A08u;
    SET_GPR_U32(ctx, 31, 0x357A10u);
    ctx->pc = 0x357A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A08u;
    // 0x357a0c: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578A8u, 0x357A08u, 0x357A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A10u;
label_357a10:
    // 0x357a10: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x357a10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x357a14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x357a18: 0x2e65000e  sltiu       $a1, $s3, 0xE
    ctx->pc = 0x357a18u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x357a1c: 0x9483002a  lhu         $v1, 0x2A($a0)
    ctx->pc = 0x357a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x357a20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x357a24: 0x14a0ffcc  bnez        $a1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x357A24u;
    {
        const bool branch_taken_0x357a24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x357A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A24u;
        // 0x357a28: 0xa483002a  sh          $v1, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a24) {
            ctx->pc = 0x357958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357958;
        }
    }
    ctx->pc = 0x357A2Cu;
label_357a2c:
    // 0x357a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357a30:
    // 0x357a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357a38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357a3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x357a3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357a40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x357a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357a44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x357a44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357a48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x357a48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357a4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x357a4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357a50: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x357a50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357a54: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x357a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357a58: 0x3e00008  jr          $ra
    ctx->pc = 0x357A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A58u;
        // 0x357a5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357A60u;
}
