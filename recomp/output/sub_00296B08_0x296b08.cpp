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

// Function: sub_00296B08
// Address: 0x296b08 - 0x296b90
void sub_00296B08_0x296b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296B08_0x296b08");
#endif

    switch (ctx->pc) {
        case 0x296b24u: goto label_296b24;
        case 0x296b40u: goto label_296b40;
        case 0x296b5cu: goto label_296b5c;
        case 0x296b78u: goto label_296b78;
        default: break;
    }

    ctx->pc = 0x296b08u;

    // 0x296b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296b0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296b14: 0x24a5bb00  addiu       $a1, $a1, -0x4500
    ctx->pc = 0x296b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949632));
    // 0x296b18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296b1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x296B1Cu;
    SET_GPR_U32(ctx, 31, 0x296B24u);
    ctx->pc = 0x296B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B1Cu;
    // 0x296b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x296B1Cu, 0x296B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B24u;
label_296b24:
    // 0x296b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x296b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x296b28: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x296B28u;
    {
        const bool branch_taken_0x296b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B28u;
        // 0x296b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b28) {
            ctx->pc = 0x296B7Cu;
            goto label_296b7c;
        }
    }
    ctx->pc = 0x296B30u;
    // 0x296b30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x296B38u;
    SET_GPR_U32(ctx, 31, 0x296B40u);
    ctx->pc = 0x296B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B38u;
    // 0x296b3c: 0x24a5bb08  addiu       $a1, $a1, -0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x296B38u, 0x296B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B40u;
label_296b40:
    // 0x296b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x296b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x296b44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x296B44u;
    {
        const bool branch_taken_0x296b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B44u;
        // 0x296b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b44) {
            ctx->pc = 0x296B7Cu;
            goto label_296b7c;
        }
    }
    ctx->pc = 0x296B4Cu;
    // 0x296b4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x296B54u;
    SET_GPR_U32(ctx, 31, 0x296B5Cu);
    ctx->pc = 0x296B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B54u;
    // 0x296b58: 0x24a5bb10  addiu       $a1, $a1, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x296B54u, 0x296B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B5Cu;
label_296b5c:
    // 0x296b5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x296b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x296b60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296B60u;
    {
        const bool branch_taken_0x296b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B60u;
        // 0x296b64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b60) {
            ctx->pc = 0x296B7Cu;
            goto label_296b7c;
        }
    }
    ctx->pc = 0x296B68u;
    // 0x296b68: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x296B70u;
    SET_GPR_U32(ctx, 31, 0x296B78u);
    ctx->pc = 0x296B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B70u;
    // 0x296b74: 0x24a5bb18  addiu       $a1, $a1, -0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x296B70u, 0x296B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B78u;
label_296b78:
    // 0x296b78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x296b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_296b7c:
    // 0x296b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296b80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x296b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296b84: 0x3e00008  jr          $ra
    ctx->pc = 0x296B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B84u;
        // 0x296b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296B8Cu;
    // 0x296b8c: 0x0  nop
    ctx->pc = 0x296b8cu;
    // NOP
    ctx->pc = 0x296b90u;
}
