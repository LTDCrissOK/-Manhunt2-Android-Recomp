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

// Function: sub_001E8970
// Address: 0x1e8970 - 0x1e8a20
void sub_001E8970_0x1e8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8970_0x1e8970");
#endif

    switch (ctx->pc) {
        case 0x1e8990u: goto label_1e8990;
        case 0x1e89a8u: goto label_1e89a8;
        default: break;
    }

    ctx->pc = 0x1e8970u;

    // 0x1e8970: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e8970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e8974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8978: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e897c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e897cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8980: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E8980u;
    {
        const bool branch_taken_0x1e8980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8980u;
        // 0x1e8984: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8980) {
            ctx->pc = 0x1E8A00u;
            goto label_1e8a00;
        }
    }
    ctx->pc = 0x1E8988u;
    // 0x1e8988: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x1e898c: 0x8d032b20  lw          $v1, 0x2B20($t0)
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B20u));
label_1e8990:
    // 0x1e8990: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8994: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e899c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e899cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e89a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E89A0u;
    {
        const bool branch_taken_0x1e89a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89A0u;
        // 0x1e89a4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89a0) {
            ctx->pc = 0x1E89ACu;
            goto label_1e89ac;
        }
    }
    ctx->pc = 0x1E89A8u;
label_1e89a8:
    // 0x1e89a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1e89ac:
    // 0x1e89ac: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E89ACu;
    {
        const bool branch_taken_0x1e89ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89ACu;
        // 0x1e89b0: 0x8d222b1c  lw          $v0, 0x2B1C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89ac) {
            ctx->pc = 0x1E89F0u;
            goto label_1e89f0;
        }
    }
    ctx->pc = 0x1E89B4u;
    // 0x1e89b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E89B4u;
    {
        const bool branch_taken_0x1e89b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89B4u;
        // 0x1e89b8: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89b4) {
            ctx->pc = 0x1E89E0u;
            goto label_1e89e0;
        }
    }
    ctx->pc = 0x1E89BCu;
    // 0x1e89bc: 0x8d022b20  lw          $v0, 0x2B20($t0)
    ctx->pc = 0x1e89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11040)));
    // 0x1e89c0: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1e89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e89c4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1e89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e89c8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1e89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e89cc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e89ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e89d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e89d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e89d4: 0x0  nop
    ctx->pc = 0x1e89d4u;
    // NOP
    // 0x1e89d8: 0x4502fff3  bc1fl       . + 4 + (-0xD << 2)
    ctx->pc = 0x1E89D8u;
    {
        const bool branch_taken_0x1e89d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e89d8) {
            ctx->pc = 0x1E89DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E89D8u;
            // 0x1e89dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E89A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E89E0u;
label_1e89e0:
    // 0x1e89e0: 0x8d022b20  lw          $v0, 0x2B20($t0)
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11040)));
    // 0x1e89e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e89e8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1e89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1e89ec: 0x8d222b1c  lw          $v0, 0x2B1C($t1)
    ctx->pc = 0x1e89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11036)));
label_1e89f0:
    // 0x1e89f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e89f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89f4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e89f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e89f8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E89F8u;
    {
        const bool branch_taken_0x1e89f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89F8u;
        // 0x1e89fc: 0x8d032b20  lw          $v1, 0x2B20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89f8) {
            ctx->pc = 0x1E8990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8990;
        }
    }
    ctx->pc = 0x1E8A00u;
label_1e8a00:
    // 0x1e8a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8A08u;
    // 0x1e8a08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e8a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8a0c: 0x0  nop
    ctx->pc = 0x1e8a0cu;
    // NOP
    // 0x1e8a10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8a14: 0x0  nop
    ctx->pc = 0x1e8a14u;
    // NOP
    // 0x1e8a18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e8a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8a1c: 0x0  nop
    ctx->pc = 0x1e8a1cu;
    // NOP
    ctx->pc = 0x1e8a20u;
}
