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

// Function: sub_001DE398
// Address: 0x1de398 - 0x1de448
void sub_001DE398_0x1de398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE398_0x1de398");
#endif

    switch (ctx->pc) {
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de410u: goto label_1de410;
        default: break;
    }

    ctx->pc = 0x1de398u;

    // 0x1de398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de3a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de3ac: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1de3acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de3b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1de3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1de3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1de3bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1de3bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1de3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1de3c4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1de3c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de3cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1de3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1de3d0: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DE3D0u;
    SET_GPR_U32(ctx, 31, 0x1DE3D8u);
    ctx->pc = 0x1DE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3D0u;
    // 0x1de3d4: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DE3D0u, 0x1DE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3D8u;
label_1de3d8:
    // 0x1de3d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE3D8u;
    {
        const bool branch_taken_0x1de3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3D8u;
        // 0x1de3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3d8) {
            ctx->pc = 0x1DE420u;
            goto label_1de420;
        }
    }
    ctx->pc = 0x1DE3E0u;
    // 0x1de3e0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1de3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3e8: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x1DE3E8u;
    SET_GPR_U32(ctx, 31, 0x1DE3F0u);
    ctx->pc = 0x1DE3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3E8u;
    // 0x1de3ec: 0xae3291b8  sw          $s2, -0x6E48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939064), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x1DE3E8u, 0x1DE3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3F0u;
label_1de3f0:
    // 0x1de3f0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DE3F0u;
    {
        const bool branch_taken_0x1de3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de3f0) {
            ctx->pc = 0x1DE3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE3F0u;
            // 0x1de3f4: 0xae2091b8  sw          $zero, -0x6E48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939064), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE41Cu;
            goto label_1de41c;
        }
    }
    ctx->pc = 0x1DE3F8u;
    // 0x1de3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de400: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1de400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de404: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1de404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de408: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1DE408u;
    SET_GPR_U32(ctx, 31, 0x1DE410u);
    ctx->pc = 0x1DE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE408u;
    // 0x1de40c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1DE408u, 0x1DE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE410u;
label_1de410:
    // 0x1de410: 0xae2091b8  sw          $zero, -0x6E48($s1)
    ctx->pc = 0x1de410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939064), GPR_U32(ctx, 0));
    // 0x1de414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE414u;
    {
        const bool branch_taken_0x1de414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE414u;
        // 0x1de418: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de414) {
            ctx->pc = 0x1DE420u;
            goto label_1de420;
        }
    }
    ctx->pc = 0x1DE41Cu;
label_1de41c:
    // 0x1de41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de420:
    // 0x1de420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de42c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de430: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de434: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1de434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de438: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1de438u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de43c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1de43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de440: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE440u;
        // 0x1de444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE448u;
}
