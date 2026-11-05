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

// Function: sub_00175880
// Address: 0x175880 - 0x1758e8
void sub_00175880_0x175880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175880_0x175880");
#endif

    switch (ctx->pc) {
        case 0x1758c0u: goto label_1758c0;
        case 0x1758d0u: goto label_1758d0;
        default: break;
    }

    ctx->pc = 0x175880u;

    // 0x175880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175884: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x175884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175888: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17588c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x175890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175894: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x175898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17589c: 0x26319a08  addiu       $s1, $s1, -0x65F8
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
    // 0x1758a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1758a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1758a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1758a8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1758ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1758acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758b0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1758b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1758b4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1758b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1758b8: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1758B8u;
    SET_GPR_U32(ctx, 31, 0x1758C0u);
    ctx->pc = 0x1758BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758B8u;
    // 0x1758bc: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1758B8u, 0x1758C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758C0u;
label_1758c0:
    // 0x1758c0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1758c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1758c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1758c8: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1758C8u;
    SET_GPR_U32(ctx, 31, 0x1758D0u);
    ctx->pc = 0x1758CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758C8u;
    // 0x1758cc: 0x8e240108  lw          $a0, 0x108($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1758C8u, 0x1758D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758D0u;
label_1758d0:
    // 0x1758d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1758d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1758d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1758d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1758dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1758DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758DCu;
        // 0x1758e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1758DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1758E4u;
    // 0x1758e4: 0x0  nop
    ctx->pc = 0x1758e4u;
    // NOP
    ctx->pc = 0x1758e8u;
}
