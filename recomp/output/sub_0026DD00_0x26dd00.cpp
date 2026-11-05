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

// Function: sub_0026DD00
// Address: 0x26dd00 - 0x26dda0
void sub_0026DD00_0x26dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DD00_0x26dd00");
#endif

    switch (ctx->pc) {
        case 0x26dd3cu: goto label_26dd3c;
        case 0x26dd6cu: goto label_26dd6c;
        case 0x26dd78u: goto label_26dd78;
        case 0x26dd88u: goto label_26dd88;
        default: break;
    }

    ctx->pc = 0x26dd00u;

    // 0x26dd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26dd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26dd08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26dd0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26dd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26dd14: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x26dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x26dd18: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x26dd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x26dd1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DD1Cu;
    {
        const bool branch_taken_0x26dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD1Cu;
        // 0x26dd20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd1c) {
            ctx->pc = 0x26DD28u;
            goto label_26dd28;
        }
    }
    ctx->pc = 0x26DD24u;
    // 0x26dd24: 0x8cb10034  lw          $s1, 0x34($a1)
    ctx->pc = 0x26dd24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_26dd28:
    // 0x26dd28: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x26dd2c: 0x10510016  beq         $v0, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26DD2Cu;
    {
        const bool branch_taken_0x26dd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x26DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD2Cu;
        // 0x26dd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd2c) {
            ctx->pc = 0x26DD88u;
            goto label_26dd88;
        }
    }
    ctx->pc = 0x26DD34u;
    // 0x26dd34: 0xc09b79c  jal         func_26DE70
    ctx->pc = 0x26DD34u;
    SET_GPR_U32(ctx, 31, 0x26DD3Cu);
    ctx->pc = 0x26DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD34u;
    // 0x26dd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26DD34u, 0x26DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD3Cu;
label_26dd3c:
    // 0x26dd3c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26DD3Cu;
    {
        const bool branch_taken_0x26dd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dd3c) {
            ctx->pc = 0x26DD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD3Cu;
            // 0x26dd40: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD80u;
            goto label_26dd80;
        }
    }
    ctx->pc = 0x26DD44u;
    // 0x26dd44: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x26dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x26dd48: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x26dd4c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26DD4Cu;
    {
        const bool branch_taken_0x26dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dd4c) {
            ctx->pc = 0x26DD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD4Cu;
            // 0x26dd50: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD80u;
            goto label_26dd80;
        }
    }
    ctx->pc = 0x26DD54u;
    // 0x26dd54: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x26dd58: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DD58u;
    {
        const bool branch_taken_0x26dd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dd58) {
            ctx->pc = 0x26DD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD58u;
            // 0x26dd5c: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD80u;
            goto label_26dd80;
        }
    }
    ctx->pc = 0x26DD60u;
    // 0x26dd60: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x26dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x26dd64: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x26DD64u;
    SET_GPR_U32(ctx, 31, 0x26DD6Cu);
    ctx->pc = 0x26DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD64u;
    // 0x26dd68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26DD64u, 0x26DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD6Cu;
label_26dd6c:
    // 0x26dd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd70: 0xc0cda74  jal         func_3369D0
    ctx->pc = 0x26DD70u;
    SET_GPR_U32(ctx, 31, 0x26DD78u);
    ctx->pc = 0x26DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD70u;
    // 0x26dd74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26DD70u, 0x26DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD78u;
label_26dd78:
    // 0x26dd78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26DD78u;
    {
        const bool branch_taken_0x26dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD78u;
        // 0x26dd7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd78) {
            ctx->pc = 0x26DD8Cu;
            goto label_26dd8c;
        }
    }
    ctx->pc = 0x26DD80u;
label_26dd80:
    // 0x26dd80: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x26DD80u;
    SET_GPR_U32(ctx, 31, 0x26DD88u);
    ctx->pc = 0x26DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD80u;
    // 0x26dd84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26DD80u, 0x26DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD88u;
label_26dd88:
    // 0x26dd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26dd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26dd8c:
    // 0x26dd8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26dd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26dd90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26dd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dd94: 0x3e00008  jr          $ra
    ctx->pc = 0x26DD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD94u;
        // 0x26dd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DD9Cu;
    // 0x26dd9c: 0x0  nop
    ctx->pc = 0x26dd9cu;
    // NOP
    ctx->pc = 0x26dda0u;
}
