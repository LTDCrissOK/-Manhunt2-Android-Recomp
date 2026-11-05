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

// Function: sub_0017BBD0
// Address: 0x17bbd0 - 0x17bc70
void sub_0017BBD0_0x17bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BBD0_0x17bbd0");
#endif

    switch (ctx->pc) {
        case 0x17bc0cu: goto label_17bc0c;
        case 0x17bc20u: goto label_17bc20;
        case 0x17bc30u: goto label_17bc30;
        case 0x17bc40u: goto label_17bc40;
        default: break;
    }

    ctx->pc = 0x17bbd0u;

    // 0x17bbd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17bbd4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x17bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x17bbd8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x17bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x17bbdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbe0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x17bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x17bbe4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x17bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x17bbe8: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x17bbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17bbec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bbf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17bbf4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17BBF4u;
    {
        const bool branch_taken_0x17bbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBF4u;
        // 0x17bbf8: 0xa0a20020  sb          $v0, 0x20($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbf4) {
            ctx->pc = 0x17BC54u;
            goto label_17bc54;
        }
    }
    ctx->pc = 0x17BBFCu;
    // 0x17bbfc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x17bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17bc00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17bc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc04: 0xc04f87a  jal         func_13E1E8
    ctx->pc = 0x17BC04u;
    SET_GPR_U32(ctx, 31, 0x17BC0Cu);
    ctx->pc = 0x17BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC04u;
    // 0x17bc08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1E8u, 0x17BC04u, 0x17BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC0Cu;
label_17bc0c:
    // 0x17bc0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17bc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc10: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17BC10u;
    {
        const bool branch_taken_0x17bc10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc10) {
            ctx->pc = 0x17BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BC10u;
            // 0x17bc14: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BC58u;
            goto label_17bc58;
        }
    }
    ctx->pc = 0x17BC18u;
    // 0x17bc18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17bc1c: 0x0  nop
    ctx->pc = 0x17bc1cu;
    // NOP
label_17bc20:
    // 0x17bc20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc24: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x17bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x17bc28: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x17BC28u;
    SET_GPR_U32(ctx, 31, 0x17BC30u);
    ctx->pc = 0x17BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC28u;
    // 0x17bc2c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x17BC28u, 0x17BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC30u;
label_17bc30:
    // 0x17bc30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc38: 0xc05eb0c  jal         func_17AC30
    ctx->pc = 0x17BC38u;
    SET_GPR_U32(ctx, 31, 0x17BC40u);
    ctx->pc = 0x17BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC38u;
    // 0x17bc3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x17BC38u, 0x17BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC40u;
label_17bc40:
    // 0x17bc40: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17bc44: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17bc44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17bc48: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x17bc48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17bc4c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17BC4Cu;
    {
        const bool branch_taken_0x17bc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC4Cu;
        // 0x17bc50: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc4c) {
            ctx->pc = 0x17BC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bc20;
        }
    }
    ctx->pc = 0x17BC54u;
label_17bc54:
    // 0x17bc54: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x17bc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17bc58:
    // 0x17bc58: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x17bc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17bc5c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x17bc5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17bc60: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x17bc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x17bc64: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC64u;
        // 0x17bc68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC6Cu;
    // 0x17bc6c: 0x0  nop
    ctx->pc = 0x17bc6cu;
    // NOP
    ctx->pc = 0x17bc70u;
}
