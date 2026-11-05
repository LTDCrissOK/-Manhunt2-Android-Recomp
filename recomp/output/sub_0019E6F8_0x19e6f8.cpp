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

// Function: sub_0019E6F8
// Address: 0x19e6f8 - 0x19e790
void sub_0019E6F8_0x19e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E6F8_0x19e6f8");
#endif

    switch (ctx->pc) {
        case 0x19e720u: goto label_19e720;
        case 0x19e74cu: goto label_19e74c;
        case 0x19e760u: goto label_19e760;
        case 0x19e778u: goto label_19e778;
        default: break;
    }

    ctx->pc = 0x19e6f8u;

    // 0x19e6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e70c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e714: 0x8e240ff8  lw          $a0, 0xFF8($s1)
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x19e718: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x19E718u;
    SET_GPR_U32(ctx, 31, 0x19E720u);
    ctx->pc = 0x19E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E718u;
    // 0x19e71c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x19E718u, 0x19E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E720u;
label_19e720:
    // 0x19e720: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E720u;
    {
        const bool branch_taken_0x19e720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E720u;
        // 0x19e724: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e720) {
            ctx->pc = 0x19E768u;
            goto label_19e768;
        }
    }
    ctx->pc = 0x19E728u;
    // 0x19e728: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19e72c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x19e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x19e730: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E730u;
    {
        const bool branch_taken_0x19e730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E730u;
        // 0x19e734: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e730) {
            ctx->pc = 0x19E754u;
            goto label_19e754;
        }
    }
    ctx->pc = 0x19E738u;
    // 0x19e738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e73c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x19e73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19e740: 0x8c451004  lw          $a1, 0x1004($v0)
    ctx->pc = 0x19e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x19e744: 0xc095156  jal         func_254558
    ctx->pc = 0x19E744u;
    SET_GPR_U32(ctx, 31, 0x19E74Cu);
    ctx->pc = 0x19E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E744u;
    // 0x19e748: 0xc60c00ac  lwc1        $f12, 0xAC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254558u, 0x19E744u, 0x19E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E74Cu;
label_19e74c:
    // 0x19e74c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19E74Cu;
    {
        const bool branch_taken_0x19e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E74Cu;
        // 0x19e750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e74c) {
            ctx->pc = 0x19E77Cu;
            goto label_19e77c;
        }
    }
    ctx->pc = 0x19E754u;
label_19e754:
    // 0x19e754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e758: 0xc09510a  jal         func_254428
    ctx->pc = 0x19E758u;
    SET_GPR_U32(ctx, 31, 0x19E760u);
    ctx->pc = 0x19E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E758u;
    // 0x19e75c: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254428u, 0x19E758u, 0x19E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E760u;
label_19e760:
    // 0x19e760: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19E760u;
    {
        const bool branch_taken_0x19e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E760u;
        // 0x19e764: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e760) {
            ctx->pc = 0x19E77Cu;
            goto label_19e77c;
        }
    }
    ctx->pc = 0x19E768u;
label_19e768:
    // 0x19e768: 0x8e240ff8  lw          $a0, 0xFF8($s1)
    ctx->pc = 0x19e768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x19e76c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e770: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x19E770u;
    SET_GPR_U32(ctx, 31, 0x19E778u);
    ctx->pc = 0x19E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E770u;
    // 0x19e774: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x19E770u, 0x19E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E778u;
label_19e778:
    // 0x19e778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e77c:
    // 0x19e77c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e784: 0x3e00008  jr          $ra
    ctx->pc = 0x19E784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E784u;
        // 0x19e788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E78Cu;
    // 0x19e78c: 0x0  nop
    ctx->pc = 0x19e78cu;
    // NOP
    ctx->pc = 0x19e790u;
}
