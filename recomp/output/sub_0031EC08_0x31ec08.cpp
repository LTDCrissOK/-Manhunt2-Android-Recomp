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

// Function: sub_0031EC08
// Address: 0x31ec08 - 0x31ec98
void sub_0031EC08_0x31ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EC08_0x31ec08");
#endif

    switch (ctx->pc) {
        case 0x31ec2cu: goto label_31ec2c;
        case 0x31ec5cu: goto label_31ec5c;
        case 0x31ec78u: goto label_31ec78;
        default: break;
    }

    ctx->pc = 0x31ec08u;

    // 0x31ec08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ec0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ec10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31ec14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ec14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec18: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x31ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x31ec1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EC1Cu;
    {
        const bool branch_taken_0x31ec1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec1c) {
            ctx->pc = 0x31EC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EC1Cu;
            // 0x31ec20: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EC30u;
            goto label_31ec30;
        }
    }
    ctx->pc = 0x31EC24u;
    // 0x31ec24: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x31EC24u;
    SET_GPR_U32(ctx, 31, 0x31EC2Cu);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x31EC24u, 0x31EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC2Cu;
label_31ec2c:
    // 0x31ec2c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x31ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_31ec30:
    // 0x31ec30: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x31ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31ec34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EC34u;
    {
        const bool branch_taken_0x31ec34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec34) {
            ctx->pc = 0x31EC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EC34u;
            // 0x31ec38: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EC4Cu;
            goto label_31ec4c;
        }
    }
    ctx->pc = 0x31EC3Cu;
    // 0x31ec3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x31ec3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31ec40: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31EC40u;
    {
        const bool branch_taken_0x31ec40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec40) {
            ctx->pc = 0x31EC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EC40u;
            // 0x31ec44: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EC68u;
            goto label_31ec68;
        }
    }
    ctx->pc = 0x31EC48u;
    // 0x31ec48: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_31ec4c:
    // 0x31ec4c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EC4Cu;
    {
        const bool branch_taken_0x31ec4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec4c) {
            ctx->pc = 0x31EC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EC4Cu;
            // 0x31ec50: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EC60u;
            goto label_31ec60;
        }
    }
    ctx->pc = 0x31EC54u;
    // 0x31ec54: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x31EC54u;
    SET_GPR_U32(ctx, 31, 0x31EC5Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x31EC54u, 0x31EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC5Cu;
label_31ec5c:
    // 0x31ec5c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x31ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_31ec60:
    // 0x31ec60: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x31ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x31ec64: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x31ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_31ec68:
    // 0x31ec68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EC68u;
    {
        const bool branch_taken_0x31ec68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ec68) {
            ctx->pc = 0x31EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EC68u;
            // 0x31ec6c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EC7Cu;
            goto label_31ec7c;
        }
    }
    ctx->pc = 0x31EC70u;
    // 0x31ec70: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x31EC70u;
    SET_GPR_U32(ctx, 31, 0x31EC78u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x31EC70u, 0x31EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC78u;
label_31ec78:
    // 0x31ec78: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x31ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_31ec7c:
    // 0x31ec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ec80: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x31ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x31ec84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ec84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ec88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31ec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC8Cu;
        // 0x31ec90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC94u;
    // 0x31ec94: 0x0  nop
    ctx->pc = 0x31ec94u;
    // NOP
    ctx->pc = 0x31ec98u;
}
