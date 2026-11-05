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

// Function: sub_003A4048
// Address: 0x3a4048 - 0x3a40d8
void sub_003A4048_0x3a4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4048_0x3a4048");
#endif

    switch (ctx->pc) {
        case 0x3a406cu: goto label_3a406c;
        case 0x3a4074u: goto label_3a4074;
        default: break;
    }

    ctx->pc = 0x3a4048u;

    // 0x3a4048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a404c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4054: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a4054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a4058: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3a4058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3a405c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A405Cu;
    {
        const bool branch_taken_0x3a405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a405c) {
            ctx->pc = 0x3A4060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A405Cu;
            // 0x3a4060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4100u;
            return;
        }
    }
    ctx->pc = 0x3A4064u;
    // 0x3a4064: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A4064u;
    SET_GPR_U32(ctx, 31, 0x3A406Cu);
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A4064u, 0x3A406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A406Cu;
label_3a406c:
    // 0x3a406c: 0xc0e8aa2  jal         func_3A2A88
    ctx->pc = 0x3A406Cu;
    SET_GPR_U32(ctx, 31, 0x3A4074u);
    ctx->pc = 0x3A4070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A406Cu;
    // 0x3a4070: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2A88u, 0x3A406Cu, 0x3A4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4074u;
label_3a4074:
    // 0x3a4074: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a4074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4078: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3a4078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a407c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A407Cu;
    {
        const bool branch_taken_0x3a407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a407c) {
            ctx->pc = 0x3A4080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A407Cu;
            // 0x3a4080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A40F0u;
            return;
        }
    }
    ctx->pc = 0x3A4084u;
    // 0x3a4084: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a4084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4088: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3a4088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3a408c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a4090: 0x8c63d740  lw          $v1, -0x28C0($v1)
    ctx->pc = 0x3a4090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956864)));
    // 0x3a4094: 0x600008  jr          $v1
    ctx->pc = 0x3A4094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A40A0u: goto label_3a40a0;
            case 0x3A40B0u: goto label_3a40b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4094u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A409Cu;
    // 0x3a409c: 0x0  nop
    ctx->pc = 0x3a409cu;
    // NOP
label_3a40a0:
    // 0x3a40a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a40a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3a40a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A40A8u;
    {
        const bool branch_taken_0x3a40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40A8u;
        // 0x3a40ac: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40a8) {
            ctx->pc = 0x3A40E0u;
            return;
        }
    }
    ctx->pc = 0x3A40B0u;
label_3a40b0:
    // 0x3a40b0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3a40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a40b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a40b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a40bc: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x3a40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x3a40c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a40c4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3a40c8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a40cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A40CCu;
    {
        const bool branch_taken_0x3a40cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40CCu;
        // 0x3a40d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40cc) {
            ctx->pc = 0x3A40E0u;
            return;
        }
    }
    ctx->pc = 0x3A40D4u;
    // 0x3a40d4: 0x0  nop
    ctx->pc = 0x3a40d4u;
    // NOP
    ctx->pc = 0x3a40d8u;
}
