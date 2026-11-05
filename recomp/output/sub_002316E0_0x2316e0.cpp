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

// Function: sub_002316E0
// Address: 0x2316e0 - 0x2317a0
void sub_002316E0_0x2316e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002316E0_0x2316e0");
#endif

    switch (ctx->pc) {
        case 0x231738u: goto label_231738;
        case 0x231744u: goto label_231744;
        case 0x231768u: goto label_231768;
        default: break;
    }

    ctx->pc = 0x2316e0u;

    // 0x2316e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2316e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2316e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2316e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2316e8: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2316ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2316ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2316f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2316f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316f4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2316f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2316f8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2316f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2316fc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2316FCu;
    {
        const bool branch_taken_0x2316fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316FCu;
        // 0x231700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316fc) {
            ctx->pc = 0x231724u;
            goto label_231724;
        }
    }
    ctx->pc = 0x231704u;
    // 0x231704: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x231704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x231708: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x231708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23170c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x23170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231710: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x231710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231714: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x231714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231718: 0x0  nop
    ctx->pc = 0x231718u;
    // NOP
    // 0x23171c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23171Cu;
    {
        const bool branch_taken_0x23171c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23171c) {
            ctx->pc = 0x231720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23171Cu;
            // 0x231720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231724u;
            goto label_231724;
        }
    }
    ctx->pc = 0x231724u;
label_231724:
    // 0x231724: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x231724u;
    {
        const bool branch_taken_0x231724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x231728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231724u;
        // 0x231728: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231724) {
            ctx->pc = 0x23178Cu;
            goto label_23178c;
        }
    }
    ctx->pc = 0x23172Cu;
    // 0x23172c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231730: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231730u;
    SET_GPR_U32(ctx, 31, 0x231738u);
    ctx->pc = 0x231734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231730u;
    // 0x231734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231730u, 0x231738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231738u;
label_231738:
    // 0x231738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23173c: 0xc08a15a  jal         func_228568
    ctx->pc = 0x23173Cu;
    SET_GPR_U32(ctx, 31, 0x231744u);
    ctx->pc = 0x231740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23173Cu;
    // 0x231740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x23173Cu, 0x231744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231744u;
label_231744:
    // 0x231744: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x231744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x231748: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x231748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23174c: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x23174cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x231750: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231750u;
    {
        const bool branch_taken_0x231750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x231754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231750u;
        // 0x231754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231750) {
            ctx->pc = 0x231760u;
            goto label_231760;
        }
    }
    ctx->pc = 0x231758u;
    // 0x231758: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231758u;
    {
        const bool branch_taken_0x231758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x231758) {
            ctx->pc = 0x23175Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231758u;
            // 0x23175c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23176Cu;
            goto label_23176c;
        }
    }
    ctx->pc = 0x231760u;
label_231760:
    // 0x231760: 0xc08dc8e  jal         func_237238
    ctx->pc = 0x231760u;
    SET_GPR_U32(ctx, 31, 0x231768u);
    ctx->pc = 0x231764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231760u;
    // 0x231764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237238u, 0x231760u, 0x231768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231768u;
label_231768:
    // 0x231768: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x231768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23176c:
    // 0x23176c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x231770: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x231770u;
    {
        const bool branch_taken_0x231770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231770) {
            ctx->pc = 0x231774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231770u;
            // 0x231774: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231790u;
            goto label_231790;
        }
    }
    ctx->pc = 0x231778u;
    // 0x231778: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x231778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x23177c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x23177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x231780: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x231780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x231784: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x231784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x231788: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x231788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_23178c:
    // 0x23178c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23178cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231790:
    // 0x231790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231794: 0x3e00008  jr          $ra
    ctx->pc = 0x231794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231794u;
        // 0x231798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23179Cu;
    // 0x23179c: 0x0  nop
    ctx->pc = 0x23179cu;
    // NOP
    ctx->pc = 0x2317a0u;
}
