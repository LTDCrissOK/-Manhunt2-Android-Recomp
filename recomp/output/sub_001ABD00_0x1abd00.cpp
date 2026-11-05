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

// Function: sub_001ABD00
// Address: 0x1abd00 - 0x1abda8
void sub_001ABD00_0x1abd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABD00_0x1abd00");
#endif

    switch (ctx->pc) {
        case 0x1abd2cu: goto label_1abd2c;
        case 0x1abd40u: goto label_1abd40;
        case 0x1abd70u: goto label_1abd70;
        case 0x1abd98u: goto label_1abd98;
        default: break;
    }

    ctx->pc = 0x1abd00u;

    // 0x1abd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abd04: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1abd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1abd08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abd0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abd10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd14: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1abd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1abd18: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABD18u;
    {
        const bool branch_taken_0x1abd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abd18) {
            ctx->pc = 0x1ABD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABD18u;
            // 0x1abd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD34u;
            goto label_1abd34;
        }
    }
    ctx->pc = 0x1ABD20u;
    // 0x1abd20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd24: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ABD24u;
    SET_GPR_U32(ctx, 31, 0x1ABD2Cu);
    ctx->pc = 0x1ABD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD24u;
    // 0x1abd28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ABD24u, 0x1ABD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD2Cu;
label_1abd2c:
    // 0x1abd2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABD2Cu;
    {
        const bool branch_taken_0x1abd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD2Cu;
        // 0x1abd30: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd2c) {
            ctx->pc = 0x1ABD44u;
            goto label_1abd44;
        }
    }
    ctx->pc = 0x1ABD34u;
label_1abd34:
    // 0x1abd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd38: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ABD38u;
    SET_GPR_U32(ctx, 31, 0x1ABD40u);
    ctx->pc = 0x1ABD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD38u;
    // 0x1abd3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ABD38u, 0x1ABD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD40u;
label_1abd40:
    // 0x1abd40: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1abd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1abd44:
    // 0x1abd44: 0x8c4303a4  lw          $v1, 0x3A4($v0)
    ctx->pc = 0x1abd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1abd48: 0x8c650334  lw          $a1, 0x334($v1)
    ctx->pc = 0x1abd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x1abd4c: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x1abd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1abd50: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ABD50u;
    {
        const bool branch_taken_0x1abd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abd50) {
            ctx->pc = 0x1ABD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABD50u;
            // 0x1abd54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD9Cu;
            goto label_1abd9c;
        }
    }
    ctx->pc = 0x1ABD58u;
    // 0x1abd58: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x1abd5c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1ABD5Cu;
    {
        const bool branch_taken_0x1abd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abd5c) {
            ctx->pc = 0x1ABD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABD5Cu;
            // 0x1abd60: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD90u;
            goto label_1abd90;
        }
    }
    ctx->pc = 0x1ABD64u;
    // 0x1abd64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd68: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x1abd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x1abd6c: 0x0  nop
    ctx->pc = 0x1abd6cu;
    // NOP
label_1abd70:
    // 0x1abd70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abd74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABD74u;
    {
        const bool branch_taken_0x1abd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD74u;
        // 0x1abd78: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd74) {
            ctx->pc = 0x1ABD8Cu;
            goto label_1abd8c;
        }
    }
    ctx->pc = 0x1ABD7Cu;
    // 0x1abd7c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1abd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abd80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ABD80u;
    {
        const bool branch_taken_0x1abd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD80u;
        // 0x1abd84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd80) {
            ctx->pc = 0x1ABD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abd70;
        }
    }
    ctx->pc = 0x1ABD88u;
    // 0x1abd88: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x1abd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_1abd8c:
    // 0x1abd8c: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1abd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1abd90:
    // 0x1abd90: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1ABD90u;
    SET_GPR_U32(ctx, 31, 0x1ABD98u);
    ctx->pc = 0x1ABD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD90u;
    // 0x1abd94: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1ABD90u, 0x1ABD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD98u;
label_1abd98:
    // 0x1abd98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abd98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abd9c:
    // 0x1abd9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abda0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDA0u;
        // 0x1abda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABDA8u;
}
