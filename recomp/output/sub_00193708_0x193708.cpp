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

// Function: sub_00193708
// Address: 0x193708 - 0x193780
void sub_00193708_0x193708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193708_0x193708");
#endif

    switch (ctx->pc) {
        case 0x193728u: goto label_193728;
        default: break;
    }

    ctx->pc = 0x193708u;

    // 0x193708: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x193708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x19370c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19370cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193710: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x193710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x193714: 0xc4610138  lwc1        $f1, 0x138($v1)
    ctx->pc = 0x193714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193718: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x193718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x19371c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19371Cu;
    {
        const bool branch_taken_0x19371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19371Cu;
        // 0x193720: 0x8c881004  lw          $t0, 0x1004($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19371c) {
            ctx->pc = 0x193748u;
            goto label_193748;
        }
    }
    ctx->pc = 0x193724u;
    // 0x193724: 0x0  nop
    ctx->pc = 0x193724u;
    // NOP
label_193728:
    // 0x193728: 0x54480008  bnel        $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193728u;
    {
        const bool branch_taken_0x193728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x193728) {
            ctx->pc = 0x19372Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193728u;
            // 0x19372c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19374Cu;
            goto label_19374c;
        }
    }
    ctx->pc = 0x193730u;
    // 0x193730: 0x8c820ff8  lw          $v0, 0xFF8($a0)
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x193734: 0xc4400138  lwc1        $f0, 0x138($v0)
    ctx->pc = 0x193734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193738: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19373c: 0x0  nop
    ctx->pc = 0x19373cu;
    // NOP
    // 0x193740: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x193740u;
    {
        const bool branch_taken_0x193740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193740) {
            ctx->pc = 0x193744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193740u;
            // 0x193744: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193748u;
            goto label_193748;
        }
    }
    ctx->pc = 0x193748u;
label_193748:
    // 0x193748: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_19374c:
    // 0x19374c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193750: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193750u;
    {
        const bool branch_taken_0x193750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193750u;
        // 0x193754: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193750) {
            ctx->pc = 0x19375Cu;
            goto label_19375c;
        }
    }
    ctx->pc = 0x193758u;
    // 0x193758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x193758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19375c:
    // 0x19375c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19375Cu;
    {
        const bool branch_taken_0x19375c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19375c) {
            ctx->pc = 0x19376Cu;
            goto label_19376c;
        }
    }
    ctx->pc = 0x193764u;
    // 0x193764: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x193764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193768: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x193768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_19376c:
    // 0x19376c: 0x5480ffee  bnel        $a0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19376Cu;
    {
        const bool branch_taken_0x19376c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19376c) {
            ctx->pc = 0x193770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19376Cu;
            // 0x193770: 0x8c821004  lw          $v0, 0x1004($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193728;
        }
    }
    ctx->pc = 0x193774u;
    // 0x193774: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x193774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x193778: 0x3e00008  jr          $ra
    ctx->pc = 0x193778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193778u;
        // 0x19377c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193780u;
}
