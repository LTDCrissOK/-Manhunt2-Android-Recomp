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

// Function: sub_0014C960
// Address: 0x14c960 - 0x14ca80
void sub_0014C960_0x14c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C960_0x14c960");
#endif

    switch (ctx->pc) {
        case 0x14c980u: goto label_14c980;
        case 0x14c998u: goto label_14c998;
        case 0x14c9a4u: goto label_14c9a4;
        case 0x14c9b4u: goto label_14c9b4;
        case 0x14c9c0u: goto label_14c9c0;
        case 0x14c9e4u: goto label_14c9e4;
        case 0x14c9f0u: goto label_14c9f0;
        case 0x14c9fcu: goto label_14c9fc;
        case 0x14ca10u: goto label_14ca10;
        case 0x14ca2cu: goto label_14ca2c;
        case 0x14ca40u: goto label_14ca40;
        case 0x14ca5cu: goto label_14ca5c;
        default: break;
    }

    ctx->pc = 0x14c960u;

    // 0x14c960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c968: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c96c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c970: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14c970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c974: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c978: 0xc053192  jal         func_14C648
    ctx->pc = 0x14C978u;
    SET_GPR_U32(ctx, 31, 0x14C980u);
    ctx->pc = 0x14C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C978u;
    // 0x14c97c: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C648u, 0x14C978u, 0x14C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C980u;
label_14c980:
    // 0x14c980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c984: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x14C984u;
    {
        const bool branch_taken_0x14c984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C984u;
        // 0x14c988: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c984) {
            ctx->pc = 0x14CA64u;
            goto label_14ca64;
        }
    }
    ctx->pc = 0x14C98Cu;
    // 0x14c98c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14c98cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14c990: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14C990u;
    SET_GPR_U32(ctx, 31, 0x14C998u);
    ctx->pc = 0x14C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C990u;
    // 0x14c994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14C990u, 0x14C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C998u;
label_14c998:
    // 0x14c998: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14c998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14c99c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14C99Cu;
    SET_GPR_U32(ctx, 31, 0x14C9A4u);
    ctx->pc = 0x14C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C99Cu;
    // 0x14c9a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14C99Cu, 0x14C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9A4u;
label_14c9a4:
    // 0x14c9a4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14c9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14c9a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c9ac: 0xc053062  jal         func_14C188
    ctx->pc = 0x14C9ACu;
    SET_GPR_U32(ctx, 31, 0x14C9B4u);
    ctx->pc = 0x14C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9ACu;
    // 0x14c9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14C9ACu, 0x14C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9B4u;
label_14c9b4:
    // 0x14c9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9b8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14C9B8u;
    SET_GPR_U32(ctx, 31, 0x14C9C0u);
    ctx->pc = 0x14C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9B8u;
    // 0x14c9bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14C9B8u, 0x14C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9C0u;
label_14c9c0:
    // 0x14c9c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14c9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9c4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14c9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c9c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c9c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14c9ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14c9d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14c9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c9d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9dc: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14C9DCu;
    SET_GPR_U32(ctx, 31, 0x14C9E4u);
    ctx->pc = 0x14C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9DCu;
    // 0x14c9e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14C9DCu, 0x14C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9E4u;
label_14c9e4:
    // 0x14c9e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9e8: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14C9E8u;
    SET_GPR_U32(ctx, 31, 0x14C9F0u);
    ctx->pc = 0x14C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9E8u;
    // 0x14c9ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14C9E8u, 0x14C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9F0u;
label_14c9f0:
    // 0x14c9f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c9f4: 0xc046104  jal         func_118410
    ctx->pc = 0x14C9F4u;
    SET_GPR_U32(ctx, 31, 0x14C9FCu);
    ctx->pc = 0x14C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9F4u;
    // 0x14c9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14C9F4u, 0x14C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9FCu;
label_14c9fc:
    // 0x14c9fc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x14ca00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14ca00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14ca04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14ca04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ca08: 0xc046290  jal         func_118A40
    ctx->pc = 0x14CA08u;
    SET_GPR_U32(ctx, 31, 0x14CA10u);
    ctx->pc = 0x14CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA08u;
    // 0x14ca0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x14CA08u, 0x14CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA10u;
label_14ca10:
    // 0x14ca10: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ca10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ca14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca18: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14ca1c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14ca20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ca24: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14CA24u;
    SET_GPR_U32(ctx, 31, 0x14CA2Cu);
    ctx->pc = 0x14CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA24u;
    // 0x14ca28: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14CA24u, 0x14CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA2Cu;
label_14ca2c:
    // 0x14ca2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14ca2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ca30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca38: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14CA38u;
    SET_GPR_U32(ctx, 31, 0x14CA40u);
    ctx->pc = 0x14CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA38u;
    // 0x14ca3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14CA38u, 0x14CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA40u;
label_14ca40:
    // 0x14ca40: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14ca44: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ca48: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14ca4c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x14ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14ca50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14ca54: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14CA54u;
    SET_GPR_U32(ctx, 31, 0x14CA5Cu);
    ctx->pc = 0x14CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA54u;
    // 0x14ca58: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14CA54u, 0x14CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA5Cu;
label_14ca5c:
    // 0x14ca5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14CA5Cu;
    {
        const bool branch_taken_0x14ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA5Cu;
        // 0x14ca60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca5c) {
            ctx->pc = 0x14CA68u;
            goto label_14ca68;
        }
    }
    ctx->pc = 0x14CA64u;
label_14ca64:
    // 0x14ca64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ca64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ca68:
    // 0x14ca68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ca68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ca6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ca6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ca70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ca70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ca74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ca78: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA78u;
        // 0x14ca7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA80u;
}
