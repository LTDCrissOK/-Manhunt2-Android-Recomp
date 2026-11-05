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

// Function: sub_00172718
// Address: 0x172718 - 0x1727d8
void sub_00172718_0x172718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172718_0x172718");
#endif

    switch (ctx->pc) {
        case 0x172734u: goto label_172734;
        case 0x17273cu: goto label_17273c;
        case 0x172744u: goto label_172744;
        case 0x17274cu: goto label_17274c;
        case 0x172754u: goto label_172754;
        case 0x172764u: goto label_172764;
        case 0x1727b0u: goto label_1727b0;
        case 0x1727c4u: goto label_1727c4;
        default: break;
    }

    ctx->pc = 0x172718u;

    // 0x172718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17271c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17272c: 0xc05c914  jal         func_172450
    ctx->pc = 0x17272Cu;
    SET_GPR_U32(ctx, 31, 0x172734u);
    ctx->pc = 0x172730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17272Cu;
    // 0x172730: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172450u, 0x17272Cu, 0x172734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172734u;
label_172734:
    // 0x172734: 0xc05d42a  jal         func_1750A8
    ctx->pc = 0x172734u;
    SET_GPR_U32(ctx, 31, 0x17273Cu);
    ctx->pc = 0x172738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172734u;
    // 0x172738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1750A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1750A8u, 0x172734u, 0x17273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17273Cu;
label_17273c:
    // 0x17273c: 0xc05d492  jal         func_175248
    ctx->pc = 0x17273Cu;
    SET_GPR_U32(ctx, 31, 0x172744u);
    ctx->pc = 0x172740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17273Cu;
    // 0x172740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175248u, 0x17273Cu, 0x172744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172744u;
label_172744:
    // 0x172744: 0xc05ca06  jal         func_172818
    ctx->pc = 0x172744u;
    SET_GPR_U32(ctx, 31, 0x17274Cu);
    ctx->pc = 0x172748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172744u;
    // 0x172748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x172744u, 0x17274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17274Cu;
label_17274c:
    // 0x17274c: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x17274Cu;
    SET_GPR_U32(ctx, 31, 0x172754u);
    ctx->pc = 0x172750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17274Cu;
    // 0x172750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x17274Cu, 0x172754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172754u;
label_172754:
    // 0x172754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17275c: 0xc05c720  jal         func_171C80
    ctx->pc = 0x17275Cu;
    SET_GPR_U32(ctx, 31, 0x172764u);
    ctx->pc = 0x172760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17275Cu;
    // 0x172760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x17275Cu, 0x172764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172764u;
label_172764:
    // 0x172764: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x172764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x172768: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x172768u;
    {
        const bool branch_taken_0x172768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172768) {
            ctx->pc = 0x17276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172768u;
            // 0x17276c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1727C8u;
            goto label_1727c8;
        }
    }
    ctx->pc = 0x172770u;
    // 0x172770: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x172770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x172774: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172774u;
    {
        const bool branch_taken_0x172774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172774u;
        // 0x172778: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172774) {
            ctx->pc = 0x172784u;
            goto label_172784;
        }
    }
    ctx->pc = 0x17277Cu;
    // 0x17277c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17277Cu;
    {
        const bool branch_taken_0x17277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17277Cu;
        // 0x172780: 0xc4610030  lwc1        $f1, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17277c) {
            ctx->pc = 0x172788u;
            goto label_172788;
        }
    }
    ctx->pc = 0x172784u;
label_172784:
    // 0x172784: 0xc441a568  lwc1        $f1, -0x5A98($v0)
    ctx->pc = 0x172784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172788:
    // 0x172788: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x172788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17278c: 0xc44089d0  lwc1        $f0, -0x7630($v0)
    ctx->pc = 0x17278cu;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172794: 0x0  nop
    ctx->pc = 0x172794u;
    // NOP
    // 0x172798: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x172798u;
    {
        const bool branch_taken_0x172798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172798u;
        // 0x17279c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172798) {
            ctx->pc = 0x1727C8u;
            goto label_1727c8;
        }
    }
    ctx->pc = 0x1727A0u;
    // 0x1727a0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1727a4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x1727a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1727a8: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1727A8u;
    SET_GPR_U32(ctx, 31, 0x1727B0u);
    ctx->pc = 0x1727ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727A8u;
    // 0x1727ac: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1727A8u, 0x1727B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727B0u;
label_1727b0:
    // 0x1727b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1727b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1727b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1727b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727b8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1727b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1727bc: 0xc04add4  jal         func_12B750
    ctx->pc = 0x1727BCu;
    SET_GPR_U32(ctx, 31, 0x1727C4u);
    ctx->pc = 0x1727C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727BCu;
    // 0x1727c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x1727BCu, 0x1727C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727C4u;
label_1727c4:
    // 0x1727c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1727c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1727c8:
    // 0x1727c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1727c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1727cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1727ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1727d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1727D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1727D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727D0u;
        // 0x1727d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1727D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1727D8u;
}
