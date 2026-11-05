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

// Function: sub_00262FC8
// Address: 0x262fc8 - 0x263058
void sub_00262FC8_0x262fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262FC8_0x262fc8");
#endif

    switch (ctx->pc) {
        case 0x262ff8u: goto label_262ff8;
        case 0x263018u: goto label_263018;
        case 0x263020u: goto label_263020;
        default: break;
    }

    ctx->pc = 0x262fc8u;

    // 0x262fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262fcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x262fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x262fd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x262fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x262fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262fd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x262fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262fdc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x262fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x262fe0: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x262fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x262fe4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x262fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x262fe8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x262FE8u;
    {
        const bool branch_taken_0x262fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FE8u;
        // 0x262fec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fe8) {
            ctx->pc = 0x26303Cu;
            goto label_26303c;
        }
    }
    ctx->pc = 0x262FF0u;
    // 0x262ff0: 0xc098bb8  jal         func_262EE0
    ctx->pc = 0x262FF0u;
    SET_GPR_U32(ctx, 31, 0x262FF8u);
    ctx->pc = 0x262FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262FF0u;
    // 0x262ff4: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262EE0u, 0x262FF0u, 0x262FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262FF8u;
label_262ff8:
    // 0x262ff8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x262FF8u;
    {
        const bool branch_taken_0x262ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262ff8) {
            ctx->pc = 0x262FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262FF8u;
            // 0x262ffc: 0x8e420230  lw          $v0, 0x230($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263034u;
            goto label_263034;
        }
    }
    ctx->pc = 0x263000u;
    // 0x263000: 0x5a200001  blezl       $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x263000u;
    {
        const bool branch_taken_0x263000 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x263000) {
            ctx->pc = 0x263004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263000u;
            // 0x263004: 0x8e110588  lw          $s1, 0x588($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263008u;
            goto label_263008;
        }
    }
    ctx->pc = 0x263008u;
label_263008:
    // 0x263008: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x263008u;
    {
        const bool branch_taken_0x263008 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x26300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263008u;
        // 0x26300c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263008) {
            ctx->pc = 0x263030u;
            goto label_263030;
        }
    }
    ctx->pc = 0x263010u;
    // 0x263010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263014: 0x0  nop
    ctx->pc = 0x263014u;
    // NOP
label_263018:
    // 0x263018: 0xc098c16  jal         func_263058
    ctx->pc = 0x263018u;
    SET_GPR_U32(ctx, 31, 0x263020u);
    ctx->pc = 0x26301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263018u;
    // 0x26301c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263058u, 0x263018u, 0x263020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263020u;
label_263020:
    // 0x263020: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x263020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x263024: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x263024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x263028: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x263028u;
    {
        const bool branch_taken_0x263028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263028u;
        // 0x26302c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263028) {
            ctx->pc = 0x263018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263018;
        }
    }
    ctx->pc = 0x263030u;
label_263030:
    // 0x263030: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x263030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_263034:
    // 0x263034: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x263034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x263038: 0xae420230  sw          $v0, 0x230($s2)
    ctx->pc = 0x263038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 2));
label_26303c:
    // 0x26303c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26303cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x263040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x263044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x263044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263048: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x263048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26304c: 0x3e00008  jr          $ra
    ctx->pc = 0x26304Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26304Cu;
        // 0x263050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26304Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263054u;
    // 0x263054: 0x0  nop
    ctx->pc = 0x263054u;
    // NOP
    ctx->pc = 0x263058u;
}
