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

// Function: sub_0017BA20
// Address: 0x17ba20 - 0x17bac0
void sub_0017BA20_0x17ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BA20_0x17ba20");
#endif

    switch (ctx->pc) {
        case 0x17ba58u: goto label_17ba58;
        case 0x17ba90u: goto label_17ba90;
        default: break;
    }

    ctx->pc = 0x17ba20u;

    // 0x17ba20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ba24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ba28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ba2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ba34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ba38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ba3c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x17ba3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17ba40: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17BA40u;
    {
        const bool branch_taken_0x17ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA40u;
        // 0x17ba44: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba40) {
            ctx->pc = 0x17BAA4u;
            goto label_17baa4;
        }
    }
    ctx->pc = 0x17BA48u;
    // 0x17ba48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17ba48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba4c: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x17ba50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17ba50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba54: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x17ba54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_17ba58:
    // 0x17ba58: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17BA58u;
    {
        const bool branch_taken_0x17ba58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x17BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA58u;
        // 0x17ba5c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba58) {
            ctx->pc = 0x17BAA4u;
            goto label_17baa4;
        }
    }
    ctx->pc = 0x17BA60u;
    // 0x17ba60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17ba64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ba68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ba6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BA6Cu;
    {
        const bool branch_taken_0x17ba6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA6Cu;
        // 0x17ba70: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba6c) {
            ctx->pc = 0x17BA90u;
            goto label_17ba90;
        }
    }
    ctx->pc = 0x17BA74u;
    // 0x17ba74: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x17ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17ba78: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17ba7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ba80: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BA80u;
    {
        const bool branch_taken_0x17ba80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA80u;
        // 0x17ba84: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba80) {
            ctx->pc = 0x17BA90u;
            goto label_17ba90;
        }
    }
    ctx->pc = 0x17BA88u;
    // 0x17ba88: 0xc05eeb0  jal         func_17BAC0
    ctx->pc = 0x17BA88u;
    SET_GPR_U32(ctx, 31, 0x17BA90u);
    ctx->pc = 0x17BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA88u;
    // 0x17ba8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BAC0u, 0x17BA88u, 0x17BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA90u;
label_17ba90:
    // 0x17ba90: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17ba94: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17ba94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ba98: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x17ba98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17ba9c: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17BA9Cu;
    {
        const bool branch_taken_0x17ba9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ba9c) {
            ctx->pc = 0x17BAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BA9Cu;
            // 0x17baa0: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ba58;
        }
    }
    ctx->pc = 0x17BAA4u;
label_17baa4:
    // 0x17baa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17baa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17baa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17baa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17baac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17baacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17bab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17bab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bab8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAB8u;
        // 0x17babc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAC0u;
}
