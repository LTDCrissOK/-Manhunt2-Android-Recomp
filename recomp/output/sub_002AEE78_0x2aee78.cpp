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

// Function: sub_002AEE78
// Address: 0x2aee78 - 0x2af030
void sub_002AEE78_0x2aee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEE78_0x2aee78");
#endif

    switch (ctx->pc) {
        case 0x2aee9cu: goto label_2aee9c;
        case 0x2aeeb0u: goto label_2aeeb0;
        case 0x2aeedcu: goto label_2aeedc;
        case 0x2aeef8u: goto label_2aeef8;
        case 0x2aef34u: goto label_2aef34;
        case 0x2aef3cu: goto label_2aef3c;
        case 0x2aef54u: goto label_2aef54;
        case 0x2aef78u: goto label_2aef78;
        case 0x2aef80u: goto label_2aef80;
        case 0x2aef94u: goto label_2aef94;
        case 0x2aefa8u: goto label_2aefa8;
        case 0x2aefb8u: goto label_2aefb8;
        case 0x2aefccu: goto label_2aefcc;
        case 0x2aefe4u: goto label_2aefe4;
        default: break;
    }

    ctx->pc = 0x2aee78u;

    // 0x2aee78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aee7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aee80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2aee84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2aee84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2aee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2aee8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2aee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2aee90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aee94: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x2AEE94u;
    SET_GPR_U32(ctx, 31, 0x2AEE9Cu);
    ctx->pc = 0x2AEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE94u;
    // 0x2aee98: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x2AEE94u, 0x2AEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE9Cu;
label_2aee9c:
    // 0x2aee9c: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x2AEE9Cu;
    {
        const bool branch_taken_0x2aee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aee9c) {
            ctx->pc = 0x2AEEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEE9Cu;
            // 0x2aeea0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF014u;
            goto label_2af014;
        }
    }
    ctx->pc = 0x2AEEA4u;
    // 0x2aeea4: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x2aeea8: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x2aeea8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x2aeeac: 0x0  nop
    ctx->pc = 0x2aeeacu;
    // NOP
label_2aeeb0:
    // 0x2aeeb0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2aeeb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2aeeb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AEEB4u;
    {
        const bool branch_taken_0x2aeeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEB4u;
        // 0x2aeeb8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeeb4) {
            ctx->pc = 0x2AEEE8u;
            goto label_2aeee8;
        }
    }
    ctx->pc = 0x2AEEBCu;
    // 0x2aeebc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x2aeebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x2aeec0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x2aeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2aeec4: 0x2484aa08  addiu       $a0, $a0, -0x55F8
    ctx->pc = 0x2aeec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945288));
    // 0x2aeec8: 0x24a5cb60  addiu       $a1, $a1, -0x34A0
    ctx->pc = 0x2aeec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953824));
    // 0x2aeecc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2aeeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2aeed0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2aeed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aeed4: 0xc0abdb6  jal         func_2AF6D8
    ctx->pc = 0x2AEED4u;
    SET_GPR_U32(ctx, 31, 0x2AEEDCu);
    ctx->pc = 0x2AEED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEED4u;
    // 0x2aeed8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6D8u, 0x2AEED4u, 0x2AEEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEDCu;
label_2aeedc:
    // 0x2aeedc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AEEDCu;
    {
        const bool branch_taken_0x2aeedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeedc) {
            ctx->pc = 0x2AEEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEEDCu;
            // 0x2aeee0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aeeb0;
        }
    }
    ctx->pc = 0x2AEEE4u;
    // 0x2aeee4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2aeee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aeee8:
    // 0x2aeee8: 0x2664aa48  addiu       $a0, $s3, -0x55B8
    ctx->pc = 0x2aeee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945352));
    // 0x2aeeec: 0x2645cba0  addiu       $a1, $s2, -0x3460
    ctx->pc = 0x2aeeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953888));
    // 0x2aeef0: 0xc0abdb6  jal         func_2AF6D8
    ctx->pc = 0x2AEEF0u;
    SET_GPR_U32(ctx, 31, 0x2AEEF8u);
    ctx->pc = 0x2AEEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEEF0u;
    // 0x2aeef4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6D8u, 0x2AEEF0u, 0x2AEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEF8u;
label_2aeef8:
    // 0x2aeef8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2aeef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2aeefc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2aeefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aef00: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x2aef00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x2aef04: 0x12240043  beq         $s1, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2AEF04u;
    {
        const bool branch_taken_0x2aef04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF04u;
        // 0x2aef08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef04) {
            ctx->pc = 0x2AF014u;
            goto label_2af014;
        }
    }
    ctx->pc = 0x2AEF0Cu;
    // 0x2aef0c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEF0Cu;
    {
        const bool branch_taken_0x2aef0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF0Cu;
        // 0x2aef10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef0c) {
            ctx->pc = 0x2AEF24u;
            goto label_2aef24;
        }
    }
    ctx->pc = 0x2AEF14u;
    // 0x2aef14: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AEF14u;
    {
        const bool branch_taken_0x2aef14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF14u;
        // 0x2aef18: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef14) {
            ctx->pc = 0x2AEF64u;
            goto label_2aef64;
        }
    }
    ctx->pc = 0x2AEF1Cu;
    // 0x2aef1c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AEF1Cu;
    {
        const bool branch_taken_0x2aef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF1Cu;
        // 0x2aef20: 0x8e22aa78  lw          $v0, -0x5588($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef1c) {
            ctx->pc = 0x2AEFF0u;
            goto label_2aeff0;
        }
    }
    ctx->pc = 0x2AEF24u;
label_2aef24:
    // 0x2aef24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2aef24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2aef28: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2aef28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2aef2c: 0xc0abdfc  jal         func_2AF7F0
    ctx->pc = 0x2AEF2Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF34u);
    ctx->pc = 0x2AEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF2Cu;
    // 0x2aef30: 0x2484cb60  addiu       $a0, $a0, -0x34A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF7F0u, 0x2AEF2Cu, 0x2AEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF34u;
label_2aef34:
    // 0x2aef34: 0xc0a1ac8  jal         func_286B20
    ctx->pc = 0x2AEF34u;
    SET_GPR_U32(ctx, 31, 0x2AEF3Cu);
    ctx->pc = 0x2AEF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF34u;
    // 0x2aef38: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B20u, 0x2AEF34u, 0x2AEF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF3Cu;
label_2aef3c:
    // 0x2aef3c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2aef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2aef40: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2aef40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2aef44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aef44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aef48: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2aef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2aef4c: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2AEF4Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF54u);
    ctx->pc = 0x2AEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF4Cu;
    // 0x2aef50: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2AEF4Cu, 0x2AEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF54u;
label_2aef54:
    // 0x2aef54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2aef58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aef5c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2AEF5Cu;
    {
        const bool branch_taken_0x2aef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF5Cu;
        // 0x2aef60: 0xac62aa78  sw          $v0, -0x5588($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef5c) {
            ctx->pc = 0x2AEFECu;
            goto label_2aefec;
        }
    }
    ctx->pc = 0x2AEF64u;
label_2aef64:
    // 0x2aef64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2aef68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2aef6c: 0x2484cb60  addiu       $a0, $a0, -0x34A0
    ctx->pc = 0x2aef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953824));
    // 0x2aef70: 0xc0abdfc  jal         func_2AF7F0
    ctx->pc = 0x2AEF70u;
    SET_GPR_U32(ctx, 31, 0x2AEF78u);
    ctx->pc = 0x2AEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF70u;
    // 0x2aef74: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF7F0u, 0x2AEF70u, 0x2AEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF78u;
label_2aef78:
    // 0x2aef78: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2AEF78u;
    SET_GPR_U32(ctx, 31, 0x2AEF80u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2AEF78u, 0x2AEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF80u;
label_2aef80:
    // 0x2aef80: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x2aef80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2aef84: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AEF84u;
    {
        const bool branch_taken_0x2aef84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF84u;
        // 0x2aef88: 0x8e22aa78  lw          $v0, -0x5588($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef84) {
            ctx->pc = 0x2AEFF0u;
            goto label_2aeff0;
        }
    }
    ctx->pc = 0x2AEF8Cu;
    // 0x2aef8c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2AEF8Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF94u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2AEF8Cu, 0x2AEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF94u;
label_2aef94:
    // 0x2aef94: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2aef94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aef98: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AEF98u;
    {
        const bool branch_taken_0x2aef98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF98u;
        // 0x2aef9c: 0x8e22aa78  lw          $v0, -0x5588($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef98) {
            ctx->pc = 0x2AEFF0u;
            goto label_2aeff0;
        }
    }
    ctx->pc = 0x2AEFA0u;
    // 0x2aefa0: 0xc0a7ada  jal         func_29EB68
    ctx->pc = 0x2AEFA0u;
    SET_GPR_U32(ctx, 31, 0x2AEFA8u);
    ctx->pc = 0x2AEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFA0u;
    // 0x2aefa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB68u, 0x2AEFA0u, 0x2AEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFA8u;
label_2aefa8:
    // 0x2aefa8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2aefa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2aefac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aefacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2AEFB0u;
    SET_GPR_U32(ctx, 31, 0x2AEFB8u);
    ctx->pc = 0x2AEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFB0u;
    // 0x2aefb4: 0x24a5ebd8  addiu       $a1, $a1, -0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2AEFB0u, 0x2AEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFB8u;
label_2aefb8:
    // 0x2aefb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aefb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aefbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AEFBCu;
    {
        const bool branch_taken_0x2aefbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFBCu;
        // 0x2aefc0: 0x8e22aa78  lw          $v0, -0x5588($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aefbc) {
            ctx->pc = 0x2AEFF0u;
            goto label_2aeff0;
        }
    }
    ctx->pc = 0x2AEFC4u;
    // 0x2aefc4: 0xc0a86f6  jal         func_2A1BD8
    ctx->pc = 0x2AEFC4u;
    SET_GPR_U32(ctx, 31, 0x2AEFCCu);
    ctx->pc = 0x2AEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFC4u;
    // 0x2aefc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1BD8u, 0x2AEFC4u, 0x2AEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFCCu;
label_2aefcc:
    // 0x2aefcc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2aefccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2aefd0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2aefd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2aefd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2aefd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aefd8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2aefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2aefdc: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x2AEFDCu;
    SET_GPR_U32(ctx, 31, 0x2AEFE4u);
    ctx->pc = 0x2AEFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFDCu;
    // 0x2aefe0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2AEFDCu, 0x2AEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFE4u;
label_2aefe4:
    // 0x2aefe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2aefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aefe8: 0xae22aa78  sw          $v0, -0x5588($s1)
    ctx->pc = 0x2aefe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945400), GPR_U32(ctx, 2));
label_2aefec:
    // 0x2aefec: 0x8e22aa78  lw          $v0, -0x5588($s1)
    ctx->pc = 0x2aefecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945400)));
label_2aeff0:
    // 0x2aeff0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AEFF0u;
    {
        const bool branch_taken_0x2aeff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFF0u;
        // 0x2aeff4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeff0) {
            ctx->pc = 0x2AF014u;
            goto label_2af014;
        }
    }
    ctx->pc = 0x2AEFF8u;
    // 0x2aeff8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aeffc: 0x8c43aa80  lw          $v1, -0x5580($v0)
    ctx->pc = 0x2aeffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA80u));
    // 0x2af000: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF000u;
    {
        const bool branch_taken_0x2af000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF000u;
        // 0x2af004: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af000) {
            ctx->pc = 0x2AF018u;
            goto label_2af018;
        }
    }
    ctx->pc = 0x2AF008u;
    // 0x2af008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2af008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2af00c: 0xac40aa7c  sw          $zero, -0x5584($v0)
    ctx->pc = 0x2af00cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAA7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA7Cu, _value); } while (0);
    // 0x2af010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2af014:
    // 0x2af014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2af014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2af018:
    // 0x2af018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2af018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af01c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2af01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2af020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af024: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF024u;
        // 0x2af028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF02Cu;
    // 0x2af02c: 0x0  nop
    ctx->pc = 0x2af02cu;
    // NOP
    ctx->pc = 0x2af030u;
}
