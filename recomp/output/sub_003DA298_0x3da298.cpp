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

// Function: sub_003DA298
// Address: 0x3da298 - 0x3da348
void sub_003DA298_0x3da298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA298_0x3da298");
#endif

    switch (ctx->pc) {
        case 0x3da2d0u: goto label_3da2d0;
        case 0x3da30cu: goto label_3da30c;
        case 0x3da328u: goto label_3da328;
        default: break;
    }

    ctx->pc = 0x3da298u;

    // 0x3da298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da29c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3da29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3da2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da2a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3da2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da2a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3da2a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3da2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da2b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da2b4: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3da2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3da2b8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3da2b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3da2bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA2BCu;
    {
        const bool branch_taken_0x3da2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2BCu;
        // 0x3da2c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2bc) {
            ctx->pc = 0x3DA2D8u;
            goto label_3da2d8;
        }
    }
    ctx->pc = 0x3DA2C4u;
    // 0x3da2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da2c8: 0xc0f67b6  jal         func_3D9ED8
    ctx->pc = 0x3DA2C8u;
    SET_GPR_U32(ctx, 31, 0x3DA2D0u);
    ctx->pc = 0x3DA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2C8u;
    // 0x3da2cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9ED8u, 0x3DA2C8u, 0x3DA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2D0u;
label_3da2d0:
    // 0x3da2d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA2D0u;
    {
        const bool branch_taken_0x3da2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da2d0) {
            ctx->pc = 0x3DA2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA2D0u;
            // 0x3da2d4: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA2E0u;
            goto label_3da2e0;
        }
    }
    ctx->pc = 0x3DA2D8u;
label_3da2d8:
    // 0x3da2d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA2D8u;
    {
        const bool branch_taken_0x3da2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2D8u;
        // 0x3da2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2d8) {
            ctx->pc = 0x3DA32Cu;
            goto label_3da32c;
        }
    }
    ctx->pc = 0x3DA2E0u;
label_3da2e0:
    // 0x3da2e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA2E0u;
    {
        const bool branch_taken_0x3da2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2E0u;
        // 0x3da2e4: 0x2c42000c  sltiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2e0) {
            ctx->pc = 0x3DA2F0u;
            goto label_3da2f0;
        }
    }
    ctx->pc = 0x3DA2E8u;
    // 0x3da2e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DA2E8u;
    {
        const bool branch_taken_0x3da2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2E8u;
        // 0x3da2ec: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2e8) {
            ctx->pc = 0x3DA328u;
            goto label_3da328;
        }
    }
    ctx->pc = 0x3DA2F0u;
label_3da2f0:
    // 0x3da2f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA2F0u;
    {
        const bool branch_taken_0x3da2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2F0u;
        // 0x3da2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2f0) {
            ctx->pc = 0x3DA314u;
            goto label_3da314;
        }
    }
    ctx->pc = 0x3DA2F8u;
    // 0x3da2f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3da2f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3da2fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3da2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3da300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da304: 0xc0f6808  jal         func_3DA020
    ctx->pc = 0x3DA304u;
    SET_GPR_U32(ctx, 31, 0x3DA30Cu);
    ctx->pc = 0x3DA308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA304u;
    // 0x3da308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA020u, 0x3DA304u, 0x3DA30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA30Cu;
label_3da30c:
    // 0x3da30c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA30Cu;
    {
        const bool branch_taken_0x3da30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA30Cu;
        // 0x3da310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da30c) {
            ctx->pc = 0x3DA32Cu;
            goto label_3da32c;
        }
    }
    ctx->pc = 0x3DA314u;
label_3da314:
    // 0x3da314: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3da314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3da318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3da318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3da31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da320: 0xc0f6882  jal         func_3DA208
    ctx->pc = 0x3DA320u;
    SET_GPR_U32(ctx, 31, 0x3DA328u);
    ctx->pc = 0x3DA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA320u;
    // 0x3da324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA208u, 0x3DA320u, 0x3DA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA328u;
label_3da328:
    // 0x3da328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da32c:
    // 0x3da32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3da330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da338: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3da338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3da33c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA33Cu;
        // 0x3da340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA344u;
    // 0x3da344: 0x0  nop
    ctx->pc = 0x3da344u;
    // NOP
    ctx->pc = 0x3da348u;
}
