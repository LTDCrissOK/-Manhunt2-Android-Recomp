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

// Function: sub_001B1A88
// Address: 0x1b1a88 - 0x1b1b20
void sub_001B1A88_0x1b1a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1A88_0x1b1a88");
#endif

    switch (ctx->pc) {
        case 0x1b1ab8u: goto label_1b1ab8;
        case 0x1b1ac8u: goto label_1b1ac8;
        case 0x1b1ae4u: goto label_1b1ae4;
        case 0x1b1af8u: goto label_1b1af8;
        case 0x1b1b04u: goto label_1b1b04;
        default: break;
    }

    ctx->pc = 0x1b1a88u;

    // 0x1b1a88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b1a8c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1b1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1b1a90: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1b1a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1b1a94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a98: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1b1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1b1a9c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1b1a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1b1aa0: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b1aa4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B1AA4u;
    {
        const bool branch_taken_0x1b1aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AA4u;
        // 0x1b1aa8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1aa4) {
            ctx->pc = 0x1B1B08u;
            goto label_1b1b08;
        }
    }
    ctx->pc = 0x1B1AACu;
    // 0x1b1aac: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1b1aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b1ab0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1B1AB0u;
    SET_GPR_U32(ctx, 31, 0x1B1AB8u);
    ctx->pc = 0x1B1AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AB0u;
    // 0x1b1ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1B1AB0u, 0x1B1AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AB8u;
label_1b1ab8:
    // 0x1b1ab8: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x1b1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b1abc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b1abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ac0: 0xc06c056  jal         func_1B0158
    ctx->pc = 0x1B1AC0u;
    SET_GPR_U32(ctx, 31, 0x1B1AC8u);
    ctx->pc = 0x1B1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AC0u;
    // 0x1b1ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0158u, 0x1B1AC0u, 0x1B1AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AC8u;
label_1b1ac8:
    // 0x1b1ac8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b1acc: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x1b1ad0: 0x2631b538  addiu       $s1, $s1, -0x4AC8
    ctx->pc = 0x1b1ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948152));
    // 0x1b1ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1ad8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1adc: 0xc06c04c  jal         func_1B0130
    ctx->pc = 0x1B1ADCu;
    SET_GPR_U32(ctx, 31, 0x1B1AE4u);
    ctx->pc = 0x1B1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1ADCu;
    // 0x1b1ae0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0130u, 0x1B1ADCu, 0x1B1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AE4u;
label_1b1ae4:
    // 0x1b1ae4: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1b1ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1aec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b1aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1af0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1B1AF0u;
    SET_GPR_U32(ctx, 31, 0x1B1AF8u);
    ctx->pc = 0x1B1AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AF0u;
    // 0x1b1af4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1B1AF0u, 0x1B1AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AF8u;
label_1b1af8:
    // 0x1b1af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1afc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1B1AFCu;
    SET_GPR_U32(ctx, 31, 0x1B1B04u);
    ctx->pc = 0x1B1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AFCu;
    // 0x1b1b00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1B1AFCu, 0x1B1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B04u;
label_1b1b04:
    // 0x1b1b04: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1b1b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1b08:
    // 0x1b1b08: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1b1b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b1b0c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1b1b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1b10: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1b1b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b1b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B14u;
        // 0x1b1b18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1B1Cu;
    // 0x1b1b1c: 0x0  nop
    ctx->pc = 0x1b1b1cu;
    // NOP
    ctx->pc = 0x1b1b20u;
}
