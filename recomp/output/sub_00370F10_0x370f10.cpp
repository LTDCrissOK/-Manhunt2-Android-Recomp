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

// Function: sub_00370F10
// Address: 0x370f10 - 0x371080
void sub_00370F10_0x370f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370F10_0x370f10");
#endif

    switch (ctx->pc) {
        case 0x370f60u: goto label_370f60;
        case 0x370f68u: goto label_370f68;
        case 0x370f74u: goto label_370f74;
        case 0x370f98u: goto label_370f98;
        case 0x370fb4u: goto label_370fb4;
        case 0x371054u: goto label_371054;
        case 0x37105cu: goto label_37105c;
        case 0x371068u: goto label_371068;
        default: break;
    }

    ctx->pc = 0x370f10u;

    // 0x370f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370f14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x370f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x370f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370f1c: 0x34429010  ori         $v0, $v0, 0x9010
    ctx->pc = 0x370f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36880);
    // 0x370f20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x370f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x370f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x370f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x370f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x370f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x370f30: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x370f30u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, 0x10009010u)); // MMIO: 0x10009010
    // 0x370f34: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x370f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x370f38: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x370F38u;
    {
        const bool branch_taken_0x370f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370f38) {
            ctx->pc = 0x370F7Cu;
            goto label_370f7c;
        }
    }
    ctx->pc = 0x370F40u;
    // 0x370f40: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x370f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x370f44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x370f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370f48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x370f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370f4c: 0x10430047  beq         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x370F4Cu;
    {
        const bool branch_taken_0x370f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x370F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F4Cu;
        // 0x370f50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f4c) {
            ctx->pc = 0x37106Cu;
            goto label_37106c;
        }
    }
    ctx->pc = 0x370F54u;
    // 0x370f54: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x370f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x370f58: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370F58u;
    SET_GPR_U32(ctx, 31, 0x370F60u);
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370F58u, 0x370F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F60u;
label_370f60:
    // 0x370f60: 0xc0dc2b4  jal         func_370AD0
    ctx->pc = 0x370F60u;
    SET_GPR_U32(ctx, 31, 0x370F68u);
    ctx->pc = 0x370F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F60u;
    // 0x370f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AD0u, 0x370F60u, 0x370F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F68u;
label_370f68:
    // 0x370f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f6c: 0xc0dcce2  jal         func_373388
    ctx->pc = 0x370F6Cu;
    SET_GPR_U32(ctx, 31, 0x370F74u);
    ctx->pc = 0x370F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F6Cu;
    // 0x370f70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373388u, 0x370F6Cu, 0x370F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F74u;
label_370f74:
    // 0x370f74: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x370F74u;
    {
        const bool branch_taken_0x370f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F74u;
        // 0x370f78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f74) {
            ctx->pc = 0x37106Cu;
            goto label_37106c;
        }
    }
    ctx->pc = 0x370F7Cu;
label_370f7c:
    // 0x370f7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x370f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370f80: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x370f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370f84: 0x1052000f  beq         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x370F84u;
    {
        const bool branch_taken_0x370f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x370F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F84u;
        // 0x370f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f84) {
            ctx->pc = 0x370FC4u;
            goto label_370fc4;
        }
    }
    ctx->pc = 0x370F8Cu;
    // 0x370f8c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x370f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370f90: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370F90u;
    SET_GPR_U32(ctx, 31, 0x370F98u);
    ctx->pc = 0x370F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F90u;
    // 0x370f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370F90u, 0x370F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F98u;
label_370f98:
    // 0x370f98: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x370f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x370f9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x370F9Cu;
    {
        const bool branch_taken_0x370f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F9Cu;
        // 0x370fa0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f9c) {
            ctx->pc = 0x370FC4u;
            goto label_370fc4;
        }
    }
    ctx->pc = 0x370FA4u;
    // 0x370fa4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x370fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370fac: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370FACu;
    SET_GPR_U32(ctx, 31, 0x370FB4u);
    ctx->pc = 0x370FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370FACu;
    // 0x370fb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370FACu, 0x370FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370FB4u;
label_370fb4:
    // 0x370fb4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x370fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x370fb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x370FB8u;
    {
        const bool branch_taken_0x370fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x370fb8) {
            ctx->pc = 0x370FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370FB8u;
            // 0x370fbc: 0x8e22fff4  lw          $v0, -0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370FD0u;
            goto label_370fd0;
        }
    }
    ctx->pc = 0x370FC0u;
    // 0x370fc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x370fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_370fc4:
    // 0x370fc4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x370fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x370fc8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x370FC8u;
    {
        const bool branch_taken_0x370fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FC8u;
        // 0x370fcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fc8) {
            ctx->pc = 0x37106Cu;
            goto label_37106c;
        }
    }
    ctx->pc = 0x370FD0u;
label_370fd0:
    // 0x370fd0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x370fd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x370fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x370fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x370fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x370fdc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x370fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x370fe0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x370fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x370fe4: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x370FE4u;
    {
        const bool branch_taken_0x370fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x370fe4) {
            ctx->pc = 0x370FFCu;
            goto label_370ffc;
        }
    }
    ctx->pc = 0x370FECu;
    // 0x370fec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x370fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370ff0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x370ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x370ff4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x370FF4u;
    {
        const bool branch_taken_0x370ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x370ff4) {
            ctx->pc = 0x37100Cu;
            goto label_37100c;
        }
    }
    ctx->pc = 0x370FFCu;
label_370ffc:
    // 0x370ffc: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x370ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x371000: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x371000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x371004: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x371004u;
    {
        const bool branch_taken_0x371004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371004u;
        // 0x371008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371004) {
            ctx->pc = 0x37106Cu;
            goto label_37106c;
        }
    }
    ctx->pc = 0x37100Cu;
label_37100c:
    // 0x37100c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x37100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x371010: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x371010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x371014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x371014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x371018: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x371018u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x37101c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37101Cu;
    {
        const bool branch_taken_0x37101c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37101c) {
            ctx->pc = 0x371020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37101Cu;
            // 0x371020: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x371024u;
            goto label_371024;
        }
    }
    ctx->pc = 0x371024u;
label_371024:
    // 0x371024: 0x2010  mfhi        $a0
    ctx->pc = 0x371024u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x371028: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x371028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x37102c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x37102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x371030: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x371030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x371034: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371034u;
    {
        const bool branch_taken_0x371034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x371038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371034u;
        // 0x371038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371034) {
            ctx->pc = 0x371048u;
            goto label_371048;
        }
    }
    ctx->pc = 0x37103Cu;
    // 0x37103c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x37103cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x371040: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x371040u;
    {
        const bool branch_taken_0x371040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371040u;
        // 0x371044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371040) {
            ctx->pc = 0x37106Cu;
            goto label_37106c;
        }
    }
    ctx->pc = 0x371048u;
label_371048:
    // 0x371048: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x371048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x37104c: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x37104Cu;
    SET_GPR_U32(ctx, 31, 0x371054u);
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x37104Cu, 0x371054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371054u;
label_371054:
    // 0x371054: 0xc0dc2b4  jal         func_370AD0
    ctx->pc = 0x371054u;
    SET_GPR_U32(ctx, 31, 0x37105Cu);
    ctx->pc = 0x371058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371054u;
    // 0x371058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AD0u, 0x371054u, 0x37105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37105Cu;
label_37105c:
    // 0x37105c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37105cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371060: 0xc0dcce2  jal         func_373388
    ctx->pc = 0x371060u;
    SET_GPR_U32(ctx, 31, 0x371068u);
    ctx->pc = 0x371064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371060u;
    // 0x371064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373388u, 0x371060u, 0x371068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371068u;
label_371068:
    // 0x371068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37106c:
    // 0x37106c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37106cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x371070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371074: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x371074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x371078: 0x3e00008  jr          $ra
    ctx->pc = 0x371078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371078u;
        // 0x37107c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371080u;
}
