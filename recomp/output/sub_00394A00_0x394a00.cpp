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

// Function: sub_00394A00
// Address: 0x394a00 - 0x394ab8
void sub_00394A00_0x394a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394A00_0x394a00");
#endif

    switch (ctx->pc) {
        case 0x394a28u: goto label_394a28;
        case 0x394a5cu: goto label_394a5c;
        case 0x394a64u: goto label_394a64;
        case 0x394a78u: goto label_394a78;
        case 0x394a90u: goto label_394a90;
        default: break;
    }

    ctx->pc = 0x394a00u;

    // 0x394a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x394a04: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x394a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394a14: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x394A14u;
    {
        const bool branch_taken_0x394a14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x394A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A14u;
        // 0x394a18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a14) {
            ctx->pc = 0x394A30u;
            goto label_394a30;
        }
    }
    ctx->pc = 0x394A1Cu;
    // 0x394a1c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x394a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x394a20: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x394A20u;
    SET_GPR_U32(ctx, 31, 0x394A28u);
    ctx->pc = 0x394A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A20u;
    // 0x394a24: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x394A20u, 0x394A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A28u;
label_394a28:
    // 0x394a28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x394A28u;
    {
        const bool branch_taken_0x394a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A28u;
        // 0x394a2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a28) {
            ctx->pc = 0x394A98u;
            goto label_394a98;
        }
    }
    ctx->pc = 0x394A30u;
label_394a30:
    // 0x394a30: 0x3c117fff  lui         $s1, 0x7FFF
    ctx->pc = 0x394a30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32767 << 16));
    // 0x394a34: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x394a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x394a38: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x394a38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x394a3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x394a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394a40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x394a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x394a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x394a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a48: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x394a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394a4c: 0x8407c  dsll32      $t0, $t0, 1
    ctx->pc = 0x394a4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 1));
    // 0x394a50: 0x845ba  dsrl        $t0, $t0, 22
    ctx->pc = 0x394a50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 22);
    // 0x394a54: 0xc0e6636  jal         func_3998D8
    ctx->pc = 0x394A54u;
    SET_GPR_U32(ctx, 31, 0x394A5Cu);
    ctx->pc = 0x394A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A54u;
    // 0x394a58: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3998D8u, 0x394A54u, 0x394A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A5Cu;
label_394a5c:
    // 0x394a5c: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x394A5Cu;
    SET_GPR_U32(ctx, 31, 0x394A64u);
    ctx->pc = 0x394A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A5Cu;
    // 0x394a60: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x394A5Cu, 0x394A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A64u;
label_394a64:
    // 0x394a64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x394a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x394a68: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x394A68u;
    {
        const bool branch_taken_0x394a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x394a68) {
            ctx->pc = 0x394A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394A68u;
            // 0x394a6c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A80u;
            goto label_394a80;
        }
    }
    ctx->pc = 0x394A70u;
    // 0x394a70: 0xc0e667c  jal         func_3999F0
    ctx->pc = 0x394A70u;
    SET_GPR_U32(ctx, 31, 0x394A78u);
    ctx->pc = 0x394A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A70u;
    // 0x394a74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3999F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999F0u, 0x394A70u, 0x394A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A78u;
label_394a78:
    // 0x394a78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x394A78u;
    {
        const bool branch_taken_0x394a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A78u;
        // 0x394a7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a78) {
            ctx->pc = 0x394A98u;
            goto label_394a98;
        }
    }
    ctx->pc = 0x394A80u;
label_394a80:
    // 0x394a80: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x394A80u;
    {
        const bool branch_taken_0x394a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x394a80) {
            ctx->pc = 0x394A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394A80u;
            // 0x394a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A98u;
            goto label_394a98;
        }
    }
    ctx->pc = 0x394A88u;
    // 0x394a88: 0xc0e5664  jal         func_395990
    ctx->pc = 0x394A88u;
    SET_GPR_U32(ctx, 31, 0x394A90u);
    ctx->pc = 0x394A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A88u;
    // 0x394a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395990u, 0x394A88u, 0x394A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394A90u;
label_394a90:
    // 0x394a90: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x394a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x394a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394a98:
    // 0x394a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x394aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x394AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394AA4u;
        // 0x394aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394AACu;
    // 0x394aac: 0x0  nop
    ctx->pc = 0x394aacu;
    // NOP
    // 0x394ab0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x394ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x394ab4: 0x0  nop
    ctx->pc = 0x394ab4u;
    // NOP
    ctx->pc = 0x394ab8u;
}
