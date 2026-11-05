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

// Function: sub_001289D0
// Address: 0x1289d0 - 0x128a80
void sub_001289D0_0x1289d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001289D0_0x1289d0");
#endif

    switch (ctx->pc) {
        case 0x128a0cu: goto label_128a0c;
        case 0x128a20u: goto label_128a20;
        case 0x128a38u: goto label_128a38;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a5cu: goto label_128a5c;
        case 0x128a6cu: goto label_128a6c;
        default: break;
    }

    ctx->pc = 0x1289d0u;

    // 0x1289d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1289d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1289d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1289d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1289d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1289dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289e0: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x1289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1289e4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1289E4u;
    {
        const bool branch_taken_0x1289e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289e4) {
            ctx->pc = 0x1289E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1289E4u;
            // 0x1289e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A70u;
            goto label_128a70;
        }
    }
    ctx->pc = 0x1289ECu;
    // 0x1289ec: 0x8e020438  lw          $v0, 0x438($s0)
    ctx->pc = 0x1289ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x1289f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1289F0u;
    {
        const bool branch_taken_0x1289f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289F0u;
        // 0x1289f4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289f0) {
            ctx->pc = 0x128A6Cu;
            goto label_128a6c;
        }
    }
    ctx->pc = 0x1289F8u;
    // 0x1289f8: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x1289f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
    // 0x1289fc: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1289FCu;
    {
        const bool branch_taken_0x1289fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289fc) {
            ctx->pc = 0x128A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1289FCu;
            // 0x128a00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A70u;
            goto label_128a70;
        }
    }
    ctx->pc = 0x128A04u;
    // 0x128a04: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x128A04u;
    SET_GPR_U32(ctx, 31, 0x128A0Cu);
    ctx->pc = 0x128A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A04u;
    // 0x128a08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x128A04u, 0x128A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A0Cu;
label_128a0c:
    // 0x128a0c: 0x8e050444  lw          $a1, 0x444($s0)
    ctx->pc = 0x128a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x128a10: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x128A10u;
    {
        const bool branch_taken_0x128a10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a10) {
            ctx->pc = 0x128A30u;
            goto label_128a30;
        }
    }
    ctx->pc = 0x128A18u;
    // 0x128a18: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x128A18u;
    SET_GPR_U32(ctx, 31, 0x128A20u);
    ctx->pc = 0x128A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A18u;
    // 0x128a1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x128A18u, 0x128A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A20u;
label_128a20:
    // 0x128a20: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x128a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x128a24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A28u;
        // 0x128a2c: 0xae020444  sw          $v0, 0x444($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a28) {
            ctx->pc = 0x128A44u;
            goto label_128a44;
        }
    }
    ctx->pc = 0x128A30u;
label_128a30:
    // 0x128a30: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x128A30u;
    SET_GPR_U32(ctx, 31, 0x128A38u);
    ctx->pc = 0x128A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A30u;
    // 0x128a34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x128A30u, 0x128A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A38u;
label_128a38:
    // 0x128a38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x128A38u;
    {
        const bool branch_taken_0x128a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a38) {
            ctx->pc = 0x128A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A38u;
            // 0x128a3c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A54u;
            goto label_128a54;
        }
    }
    ctx->pc = 0x128A40u;
    // 0x128a40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_128a44:
    // 0x128a44: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128A44u;
    SET_GPR_U32(ctx, 31, 0x128A4Cu);
    ctx->pc = 0x128A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A44u;
    // 0x128a48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128A44u, 0x128A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A4Cu;
label_128a4c:
    // 0x128a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128A4Cu;
    {
        const bool branch_taken_0x128a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A4Cu;
        // 0x128a50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a4c) {
            ctx->pc = 0x128A70u;
            goto label_128a70;
        }
    }
    ctx->pc = 0x128A54u;
label_128a54:
    // 0x128a54: 0xc042f2a  jal         func_10BCA8
    ctx->pc = 0x128A54u;
    SET_GPR_U32(ctx, 31, 0x128A5Cu);
    ctx->pc = 0x128A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A54u;
    // 0x128a58: 0xae000444  sw          $zero, 0x444($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCA8u, 0x128A54u, 0x128A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A5Cu;
label_128a5c:
    // 0x128a5c: 0xae000434  sw          $zero, 0x434($s0)
    ctx->pc = 0x128a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 0));
    // 0x128a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a64: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128A64u;
    SET_GPR_U32(ctx, 31, 0x128A6Cu);
    ctx->pc = 0x128A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A64u;
    // 0x128a68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128A64u, 0x128A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A6Cu;
label_128a6c:
    // 0x128a6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128a70:
    // 0x128a70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x128a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128a74: 0x3e00008  jr          $ra
    ctx->pc = 0x128A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A74u;
        // 0x128a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128A7Cu;
    // 0x128a7c: 0x0  nop
    ctx->pc = 0x128a7cu;
    // NOP
    ctx->pc = 0x128a80u;
}
