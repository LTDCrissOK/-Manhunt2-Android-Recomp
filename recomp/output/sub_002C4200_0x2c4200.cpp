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

// Function: sub_002C4200
// Address: 0x2c4200 - 0x2c4298
void sub_002C4200_0x2c4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4200_0x2c4200");
#endif

    switch (ctx->pc) {
        case 0x2c4230u: goto label_2c4230;
        case 0x2c423cu: goto label_2c423c;
        case 0x2c4244u: goto label_2c4244;
        default: break;
    }

    ctx->pc = 0x2c4200u;

    // 0x2c4200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4204: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c4204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c4208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c420c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c420cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4210: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c4210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2c4214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c4214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c4218: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x2c4218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c421c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C421Cu;
    {
        const bool branch_taken_0x2c421c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C421Cu;
        // 0x2c4220: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c421c) {
            ctx->pc = 0x2C427Cu;
            goto label_2c427c;
        }
    }
    ctx->pc = 0x2C4224u;
    // 0x2c4224: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c4228: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2C4228u;
    SET_GPR_U32(ctx, 31, 0x2C4230u);
    ctx->pc = 0x2C422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4228u;
    // 0x2c422c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2C4228u, 0x2C4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4230u;
label_2c4230:
    // 0x2c4230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4234: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C4234u;
    SET_GPR_U32(ctx, 31, 0x2C423Cu);
    ctx->pc = 0x2C4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4234u;
    // 0x2c4238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C4234u, 0x2C423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C423Cu;
label_2c423c:
    // 0x2c423c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C423Cu;
    SET_GPR_U32(ctx, 31, 0x2C4244u);
    ctx->pc = 0x2C4240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C423Cu;
    // 0x2c4240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C423Cu, 0x2C4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4244u;
label_2c4244:
    // 0x2c4244: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x2c4244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x2c4248: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2c4248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c424c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2c424cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c4250: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2c4250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c4254: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c4254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4258: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2c4258u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c425c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2c425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c4260: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c4260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4264: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x2c4264u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c4268: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2c4268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2c426c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c426cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4270: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x2c4270u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c4274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4278: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x2c4278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_2c427c:
    // 0x2c427c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c427cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c4280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c4284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c4284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4288: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c4288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c428c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C428Cu;
        // 0x2c4290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4294u;
    // 0x2c4294: 0x0  nop
    ctx->pc = 0x2c4294u;
    // NOP
    ctx->pc = 0x2c4298u;
}
