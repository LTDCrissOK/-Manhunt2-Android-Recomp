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

// Function: sub_002560C8
// Address: 0x2560c8 - 0x256148
void sub_002560C8_0x2560c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002560C8_0x2560c8");
#endif

    switch (ctx->pc) {
        case 0x2560f4u: goto label_2560f4;
        case 0x256118u: goto label_256118;
        case 0x25612cu: goto label_25612c;
        default: break;
    }

    ctx->pc = 0x2560c8u;

    // 0x2560c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2560c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2560cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2560ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2560d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2560d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2560d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2560d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2560d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2560dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2560dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2560e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2560e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2560e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2560e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2560ec: 0xc0696ec  jal         func_1A5BB0
    ctx->pc = 0x2560ECu;
    SET_GPR_U32(ctx, 31, 0x2560F4u);
    ctx->pc = 0x2560F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2560ECu;
    // 0x2560f0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5BB0u, 0x2560ECu, 0x2560F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2560F4u;
label_2560f4:
    // 0x2560f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2560f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2560f8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2560f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2560fc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2560fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x256100: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x256100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x256104: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256104u;
    {
        const bool branch_taken_0x256104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256104u;
        // 0x256108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256104) {
            ctx->pc = 0x256120u;
            goto label_256120;
        }
    }
    ctx->pc = 0x25610Cu;
    // 0x25610c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25610cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256110: 0xc09588e  jal         func_256238
    ctx->pc = 0x256110u;
    SET_GPR_U32(ctx, 31, 0x256118u);
    ctx->pc = 0x256114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256110u;
    // 0x256114: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x256238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256238u, 0x256110u, 0x256118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256118u;
label_256118:
    // 0x256118: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x256118u;
    {
        const bool branch_taken_0x256118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256118u;
        // 0x25611c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256118) {
            ctx->pc = 0x256130u;
            goto label_256130;
        }
    }
    ctx->pc = 0x256120u;
label_256120:
    // 0x256120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256124: 0xc095932  jal         func_2564C8
    ctx->pc = 0x256124u;
    SET_GPR_U32(ctx, 31, 0x25612Cu);
    ctx->pc = 0x256128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256124u;
    // 0x256128: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2564C8u, 0x256124u, 0x25612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25612Cu;
label_25612c:
    // 0x25612c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25612cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_256130:
    // 0x256130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256138: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x256138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25613c: 0x3e00008  jr          $ra
    ctx->pc = 0x25613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25613Cu;
        // 0x256140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25613Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256144u;
    // 0x256144: 0x0  nop
    ctx->pc = 0x256144u;
    // NOP
    ctx->pc = 0x256148u;
}
