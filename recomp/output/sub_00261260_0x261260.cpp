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

// Function: sub_00261260
// Address: 0x261260 - 0x2612f0
void sub_00261260_0x261260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261260_0x261260");
#endif

    switch (ctx->pc) {
        case 0x261294u: goto label_261294;
        case 0x2612a8u: goto label_2612a8;
        case 0x2612bcu: goto label_2612bc;
        default: break;
    }

    ctx->pc = 0x261260u;

    // 0x261260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x261264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x261268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26126c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26126cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x261274: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x261274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x261278: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x26127c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26127Cu;
    {
        const bool branch_taken_0x26127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26127Cu;
        // 0x261280: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26127c) {
            ctx->pc = 0x2612D4u;
            goto label_2612d4;
        }
    }
    ctx->pc = 0x261284u;
    // 0x261284: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x261284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x261288: 0xc60c0300  lwc1        $f12, 0x300($s0)
    ctx->pc = 0x261288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26128c: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x26128Cu;
    SET_GPR_U32(ctx, 31, 0x261294u);
    ctx->pc = 0x261290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26128Cu;
    // 0x261290: 0x24a55b30  addiu       $a1, $a1, 0x5B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x26128Cu, 0x261294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261294u;
label_261294:
    // 0x261294: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x261294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x261298: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x261298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x26129c: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x26129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2612a0: 0xc0b15b8  jal         func_2C56E0
    ctx->pc = 0x2612A0u;
    SET_GPR_U32(ctx, 31, 0x2612A8u);
    ctx->pc = 0x2612A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612A0u;
    // 0x2612a4: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C56E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C56E0u, 0x2612A0u, 0x2612A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612A8u;
label_2612a8:
    // 0x2612a8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2612a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2612ac: 0x8e24024c  lw          $a0, 0x24C($s1)
    ctx->pc = 0x2612acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x2612b0: 0xc60c0308  lwc1        $f12, 0x308($s0)
    ctx->pc = 0x2612b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2612b4: 0xc0b15b8  jal         func_2C56E0
    ctx->pc = 0x2612B4u;
    SET_GPR_U32(ctx, 31, 0x2612BCu);
    ctx->pc = 0x2612B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612B4u;
    // 0x2612b8: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C56E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C56E0u, 0x2612B4u, 0x2612BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612BCu;
label_2612bc:
    // 0x2612bc: 0x260302f0  addiu       $v1, $s0, 0x2F0
    ctx->pc = 0x2612bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2612c0: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x2612c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x2612c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2612c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2612c8: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2612c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2612cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2612CCu;
    {
        const bool branch_taken_0x2612cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612CCu;
        // 0x2612d0: 0x8e22024c  lw          $v0, 0x24C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612cc) {
            ctx->pc = 0x2612D8u;
            goto label_2612d8;
        }
    }
    ctx->pc = 0x2612D4u;
label_2612d4:
    // 0x2612d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2612d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2612d8:
    // 0x2612d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2612d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2612dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2612dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2612e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2612e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2612e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2612E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612E4u;
        // 0x2612e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2612E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2612ECu;
    // 0x2612ec: 0x0  nop
    ctx->pc = 0x2612ecu;
    // NOP
    ctx->pc = 0x2612f0u;
}
