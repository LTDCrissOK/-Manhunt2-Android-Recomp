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

// Function: sub_003A6728
// Address: 0x3a6728 - 0x3a6780
void sub_003A6728_0x3a6728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6728_0x3a6728");
#endif

    switch (ctx->pc) {
        case 0x3a674cu: goto label_3a674c;
        case 0x3a6758u: goto label_3a6758;
        default: break;
    }

    ctx->pc = 0x3a6728u;

    // 0x3a6728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a672c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a672cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a6730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a6730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6734: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x3a6734u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3a6738: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x3a6738u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x3a673c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a6744: 0xc0e99c4  jal         func_3A6710
    ctx->pc = 0x3A6744u;
    SET_GPR_U32(ctx, 31, 0x3A674Cu);
    ctx->pc = 0x3A6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6744u;
    // 0x3a6748: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6710u, 0x3A6744u, 0x3A674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A674Cu;
label_3a674c:
    // 0x3a674c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6750: 0xc0e99c4  jal         func_3A6710
    ctx->pc = 0x3A6750u;
    SET_GPR_U32(ctx, 31, 0x3A6758u);
    ctx->pc = 0x3A6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6750u;
    // 0x3a6754: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6710u, 0x3A6750u, 0x3A6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6758u;
label_3a6758:
    // 0x3a6758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a6758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a675c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x3a675cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x3a6760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a6760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6764: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x3a6764u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3a6768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a676c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a676cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6774: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6774u;
        // 0x3a6778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A677Cu;
    // 0x3a677c: 0x0  nop
    ctx->pc = 0x3a677cu;
    // NOP
    ctx->pc = 0x3a6780u;
}
