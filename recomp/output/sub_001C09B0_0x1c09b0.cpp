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

// Function: sub_001C09B0
// Address: 0x1c09b0 - 0x1c0ac0
void sub_001C09B0_0x1c09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C09B0_0x1c09b0");
#endif

    switch (ctx->pc) {
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c0a08u: goto label_1c0a08;
        case 0x1c0a18u: goto label_1c0a18;
        case 0x1c0a58u: goto label_1c0a58;
        case 0x1c0a6cu: goto label_1c0a6c;
        case 0x1c0a80u: goto label_1c0a80;
        default: break;
    }

    ctx->pc = 0x1c09b0u;

    // 0x1c09b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c09b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09b8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1c09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1c09bc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1c09bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1c09c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c09c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09c4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1c09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1c09c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c09c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09cc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1c09ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1c09d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c09d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09d4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1c09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1c09d8: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1c09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1c09dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c09dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09e0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1c09e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1c09e4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1c09e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1c09e8: 0xae8204b0  sw          $v0, 0x4B0($s4)
    ctx->pc = 0x1c09e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1200), GPR_U32(ctx, 2));
    // 0x1c09ec: 0x8e220fe8  lw          $v0, 0xFE8($s1)
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x1c09f0: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1C09F0u;
    SET_GPR_U32(ctx, 31, 0x1C09F8u);
    ctx->pc = 0x1C09F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09F0u;
    // 0x1c09f4: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1C09F0u, 0x1C09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09F8u;
label_1c09f8:
    // 0x1c09f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c09fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a00: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1C0A00u;
    SET_GPR_U32(ctx, 31, 0x1C0A08u);
    ctx->pc = 0x1C0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A00u;
    // 0x1c0a04: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1C0A00u, 0x1C0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A08u;
label_1c0a08:
    // 0x1c0a08: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1c0a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c0a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C0A10u;
    SET_GPR_U32(ctx, 31, 0x1C0A18u);
    ctx->pc = 0x1C0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A10u;
    // 0x1c0a14: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C0A10u, 0x1C0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A18u;
label_1c0a18:
    // 0x1c0a18: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c0a1c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c0a20: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c0a20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a24: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1c0a28: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1c0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1c0a2c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c0a30: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1c0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1c0a34: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1c0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1c0a38: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1c0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1c0a3c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0A3Cu;
    {
        const bool branch_taken_0x1c0a3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A3Cu;
        // 0x1c0a40: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a3c) {
            ctx->pc = 0x1C0A60u;
            goto label_1c0a60;
        }
    }
    ctx->pc = 0x1C0A44u;
    // 0x1c0a44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c0a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c0a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0a50: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1C0A50u;
    SET_GPR_U32(ctx, 31, 0x1C0A58u);
    ctx->pc = 0x1C0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A50u;
    // 0x1c0a54: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C0A50u, 0x1C0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A58u;
label_1c0a58:
    // 0x1c0a58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0A58u;
    {
        const bool branch_taken_0x1c0a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A58u;
        // 0x1c0a5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a58) {
            ctx->pc = 0x1C0A70u;
            goto label_1c0a70;
        }
    }
    ctx->pc = 0x1C0A60u;
label_1c0a60:
    // 0x1c0a60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c0a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a64: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1C0A64u;
    SET_GPR_U32(ctx, 31, 0x1C0A6Cu);
    ctx->pc = 0x1C0A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A64u;
    // 0x1c0a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1C0A64u, 0x1C0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A6Cu;
label_1c0a6c:
    // 0x1c0a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a70:
    // 0x1c0a70: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1c0a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c0a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a78: 0xc06f6f2  jal         func_1BDBC8
    ctx->pc = 0x1C0A78u;
    SET_GPR_U32(ctx, 31, 0x1C0A80u);
    ctx->pc = 0x1C0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A78u;
    // 0x1c0a7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBC8u, 0x1C0A78u, 0x1C0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A80u;
label_1c0a80:
    // 0x1c0a80: 0x26a20f90  addiu       $v0, $s5, 0xF90
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3984));
    // 0x1c0a84: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c0a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0a88: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1c0a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c0a8c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1c0a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0a90: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1c0a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c0a94: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1c0a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0a98: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1c0a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c0a9c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1c0a9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c0aa0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1c0aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c0aa4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1c0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1c0aa8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1c0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1c0aac: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1c0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1c0ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AB0u;
        // 0x1c0ab4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0AB8u;
    // 0x1c0ab8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c0ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c0abc: 0x0  nop
    ctx->pc = 0x1c0abcu;
    // NOP
    ctx->pc = 0x1c0ac0u;
}
