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

// Function: sub_0010B468
// Address: 0x10b468 - 0x10b4e0
void sub_0010B468_0x10b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B468_0x10b468");
#endif

    switch (ctx->pc) {
        case 0x10b48cu: goto label_10b48c;
        case 0x10b4b8u: goto label_10b4b8;
        default: break;
    }

    ctx->pc = 0x10b468u;

    // 0x10b468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b478: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10b478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10b47c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b484: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B484u;
    SET_GPR_U32(ctx, 31, 0x10B48Cu);
    ctx->pc = 0x10B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B484u;
    // 0x10b488: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B484u, 0x10B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B48Cu;
label_10b48c:
    // 0x10b48c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b48cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b490: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b494: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B494u;
    {
        const bool branch_taken_0x10b494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B494u;
        // 0x10b498: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b494) {
            ctx->pc = 0x10B4C0u;
            goto label_10b4c0;
        }
    }
    ctx->pc = 0x10B49Cu;
    // 0x10b49c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b4a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b4a4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b4a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B4A8u;
    {
        const bool branch_taken_0x10b4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4A8u;
        // 0x10b4ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4a8) {
            ctx->pc = 0x10B4C0u;
            goto label_10b4c0;
        }
    }
    ctx->pc = 0x10B4B0u;
    // 0x10b4b0: 0xc043f8e  jal         func_10FE38
    ctx->pc = 0x10B4B0u;
    SET_GPR_U32(ctx, 31, 0x10B4B8u);
    ctx->pc = 0x10B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4B0u;
    // 0x10b4b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE38u, 0x10B4B0u, 0x10B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4B8u;
label_10b4b8:
    // 0x10b4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B4B8u;
    {
        const bool branch_taken_0x10b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4B8u;
        // 0x10b4bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4b8) {
            ctx->pc = 0x10B4C4u;
            goto label_10b4c4;
        }
    }
    ctx->pc = 0x10B4C0u;
label_10b4c0:
    // 0x10b4c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b4c4:
    // 0x10b4c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b4c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b4c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b4c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b4cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b4d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10b4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4D4u;
        // 0x10b4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B4DCu;
    // 0x10b4dc: 0x0  nop
    ctx->pc = 0x10b4dcu;
    // NOP
    ctx->pc = 0x10b4e0u;
}
