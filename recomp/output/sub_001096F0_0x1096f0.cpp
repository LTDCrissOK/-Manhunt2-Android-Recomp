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

// Function: sub_001096F0
// Address: 0x1096f0 - 0x109778
void sub_001096F0_0x1096f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001096F0_0x1096f0");
#endif

    switch (ctx->pc) {
        case 0x10970cu: goto label_10970c;
        case 0x109748u: goto label_109748;
        case 0x109754u: goto label_109754;
        default: break;
    }

    ctx->pc = 0x1096f0u;

    // 0x1096f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1096f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1096f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1096f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1096f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1096fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1096fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109704: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109704u;
    SET_GPR_U32(ctx, 31, 0x10970Cu);
    ctx->pc = 0x109708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109704u;
    // 0x109708: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109704u, 0x10970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10970Cu;
label_10970c:
    // 0x10970c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10970cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109710: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x109710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x109714: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x109714u;
    {
        const bool branch_taken_0x109714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109714u;
        // 0x109718: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109714) {
            ctx->pc = 0x10975Cu;
            goto label_10975c;
        }
    }
    ctx->pc = 0x10971Cu;
    // 0x10971c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x109720: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109724: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x109724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109728: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x109728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10972c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10972Cu;
    {
        const bool branch_taken_0x10972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10972Cu;
        // 0x109730: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10972c) {
            ctx->pc = 0x10973Cu;
            goto label_10973c;
        }
    }
    ctx->pc = 0x109734u;
    // 0x109734: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x109734u;
    {
        const bool branch_taken_0x109734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109734u;
        // 0x109738: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109734) {
            ctx->pc = 0x109760u;
            goto label_109760;
        }
    }
    ctx->pc = 0x10973Cu;
label_10973c:
    // 0x10973c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10973cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109740: 0xc047778  jal         func_11DDE0
    ctx->pc = 0x109740u;
    SET_GPR_U32(ctx, 31, 0x109748u);
    ctx->pc = 0x109744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109740u;
    // 0x109744: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDE0u, 0x109740u, 0x109748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109748u;
label_109748:
    // 0x109748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10974c: 0xc0440e8  jal         func_1103A0
    ctx->pc = 0x10974Cu;
    SET_GPR_U32(ctx, 31, 0x109754u);
    ctx->pc = 0x109750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10974Cu;
    // 0x109750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A0u, 0x10974Cu, 0x109754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109754u;
label_109754:
    // 0x109754: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109754u;
    {
        const bool branch_taken_0x109754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109754u;
        // 0x109758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109754) {
            ctx->pc = 0x109760u;
            goto label_109760;
        }
    }
    ctx->pc = 0x10975Cu;
label_10975c:
    // 0x10975c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10975cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109760:
    // 0x109760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10976c: 0x3e00008  jr          $ra
    ctx->pc = 0x10976Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10976Cu;
        // 0x109770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10976Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109774u;
    // 0x109774: 0x0  nop
    ctx->pc = 0x109774u;
    // NOP
    ctx->pc = 0x109778u;
}
