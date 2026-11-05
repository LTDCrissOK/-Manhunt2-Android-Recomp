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

// Function: sub_001A8710
// Address: 0x1a8710 - 0x1a8788
void sub_001A8710_0x1a8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8710_0x1a8710");
#endif

    switch (ctx->pc) {
        case 0x1a875cu: goto label_1a875c;
        case 0x1a8768u: goto label_1a8768;
        default: break;
    }

    ctx->pc = 0x1a8710u;

    // 0x1a8710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a871c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a871cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8724: 0xc6210194  lwc1        $f1, 0x194($s1)
    ctx->pc = 0x1a8724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8728: 0xc6200198  lwc1        $f0, 0x198($s1)
    ctx->pc = 0x1a8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a872c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a872cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8730: 0x0  nop
    ctx->pc = 0x1a8730u;
    // NOP
    // 0x1a8734: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A8734u;
    {
        const bool branch_taken_0x1a8734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8734u;
        // 0x1a8738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8734) {
            ctx->pc = 0x1A8770u;
            goto label_1a8770;
        }
    }
    ctx->pc = 0x1A873Cu;
    // 0x1a873c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1a8740: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1a8744: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1a8744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1a8748: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8748u;
    {
        const bool branch_taken_0x1a8748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8748u;
        // 0x1a874c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8748) {
            ctx->pc = 0x1A8770u;
            goto label_1a8770;
        }
    }
    ctx->pc = 0x1A8750u;
    // 0x1a8750: 0x8e30014c  lw          $s0, 0x14C($s1)
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x1a8754: 0xc069878  jal         func_1A61E0
    ctx->pc = 0x1A8754u;
    SET_GPR_U32(ctx, 31, 0x1A875Cu);
    ctx->pc = 0x1A8758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8754u;
    // 0x1a8758: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A61E0u, 0x1A8754u, 0x1A875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A875Cu;
label_1a875c:
    // 0x1a875c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8760: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A8760u;
    SET_GPR_U32(ctx, 31, 0x1A8768u);
    ctx->pc = 0x1A8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8760u;
    // 0x1a8764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A8760u, 0x1A8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8768u;
label_1a8768:
    // 0x1a8768: 0xae30014c  sw          $s0, 0x14C($s1)
    ctx->pc = 0x1a8768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 16));
    // 0x1a876c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8770:
    // 0x1a8770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a877c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A877Cu;
        // 0x1a8780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A877Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8784u;
    // 0x1a8784: 0x0  nop
    ctx->pc = 0x1a8784u;
    // NOP
    ctx->pc = 0x1a8788u;
}
