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

// Function: sub_003DA5B8
// Address: 0x3da5b8 - 0x3da618
void sub_003DA5B8_0x3da5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA5B8_0x3da5b8");
#endif

    switch (ctx->pc) {
        case 0x3da5e4u: goto label_3da5e4;
        case 0x3da5fcu: goto label_3da5fc;
        default: break;
    }

    ctx->pc = 0x3da5b8u;

    // 0x3da5b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3da5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3da5bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3da5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3da5c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3da5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3da5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5c8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3da5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3da5cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3da5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3da5d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3da5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da5d8: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x3da5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da5dc: 0xc0f68a6  jal         func_3DA298
    ctx->pc = 0x3DA5DCu;
    SET_GPR_U32(ctx, 31, 0x3DA5E4u);
    ctx->pc = 0x3DA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA5DCu;
    // 0x3da5e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA298u, 0x3DA5DCu, 0x3DA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA5E4u;
label_3da5e4:
    // 0x3da5e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA5E4u;
    {
        const bool branch_taken_0x3da5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5E4u;
        // 0x3da5e8: 0x97a60000  lhu         $a2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da5e4) {
            ctx->pc = 0x3DA5FCu;
            goto label_3da5fc;
        }
    }
    ctx->pc = 0x3DA5ECu;
    // 0x3da5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3da5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da5f4: 0xc0f693a  jal         func_3DA4E8
    ctx->pc = 0x3DA5F4u;
    SET_GPR_U32(ctx, 31, 0x3DA5FCu);
    ctx->pc = 0x3DA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA5F4u;
    // 0x3da5f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA4E8u, 0x3DA5F4u, 0x3DA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA5FCu;
label_3da5fc:
    // 0x3da5fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3da5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da600: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3da600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3da604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3da604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da608: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3da608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3da60c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA60Cu;
        // 0x3da610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA614u;
    // 0x3da614: 0x0  nop
    ctx->pc = 0x3da614u;
    // NOP
    ctx->pc = 0x3da618u;
}
