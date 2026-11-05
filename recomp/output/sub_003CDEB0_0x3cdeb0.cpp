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

// Function: sub_003CDEB0
// Address: 0x3cdeb0 - 0x3cdef8
void sub_003CDEB0_0x3cdeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDEB0_0x3cdeb0");
#endif

    switch (ctx->pc) {
        case 0x3cdeb0u: goto label_3cdeb0;
        case 0x3cdeb4u: goto label_3cdeb4;
        case 0x3cdeb8u: goto label_3cdeb8;
        case 0x3cdebcu: goto label_3cdebc;
        case 0x3cdec0u: goto label_3cdec0;
        case 0x3cdec4u: goto label_3cdec4;
        case 0x3cdec8u: goto label_3cdec8;
        case 0x3cdeccu: goto label_3cdecc;
        case 0x3cded0u: goto label_3cded0;
        case 0x3cded4u: goto label_3cded4;
        case 0x3cded8u: goto label_3cded8;
        case 0x3cdedcu: goto label_3cdedc;
        case 0x3cdee0u: goto label_3cdee0;
        case 0x3cdee4u: goto label_3cdee4;
        case 0x3cdee8u: goto label_3cdee8;
        case 0x3cdeecu: goto label_3cdeec;
        case 0x3cdef0u: goto label_3cdef0;
        case 0x3cdef4u: goto label_3cdef4;
        default: break;
    }

    ctx->pc = 0x3cdeb0u;

label_3cdeb0:
    // 0x3cdeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cdeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cdeb4:
    // 0x3cdeb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3cdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3cdeb8:
    // 0x3cdeb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cdeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cdebc:
    // 0x3cdebc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3cdec0:
    if (ctx->pc == 0x3CDEC0u) {
        ctx->pc = 0x3CDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEBCu;
        // 0x3cdec0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDEC4u;
        goto label_3cdec4;
    }
    ctx->pc = 0x3CDEBCu;
    {
        const bool branch_taken_0x3cdebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEBCu;
        // 0x3cdec0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdebc) {
            ctx->pc = 0x3CDEDCu;
            goto label_3cdedc;
        }
    }
    ctx->pc = 0x3CDEC4u;
label_3cdec4:
    // 0x3cdec4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3cdec8:
    // 0x3cdec8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3cdec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3cdecc:
    // 0x3cdecc: 0x8c5c5100  lw          $gp, 0x5100($v0)
    ctx->pc = 0x3cdeccu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20736)));
label_3cded0:
    // 0x3cded0: 0x60f809  jalr        $v1
label_3cded4:
    if (ctx->pc == 0x3CDED4u) {
        ctx->pc = 0x3CDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDED0u;
        // 0x3cded4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDED8u;
        goto label_3cded8;
    }
    ctx->pc = 0x3CDED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CDED8u);
        ctx->pc = 0x3CDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDED0u;
        // 0x3cded4: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDED0u, 0x3CDED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDED8u;
label_3cded8:
    // 0x3cded8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3cded8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdedc:
    // 0x3cdedc: 0xf  sync
    ctx->pc = 0x3cdedcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3cdee0:
    // 0x3cdee0: 0x42000038  ei
    ctx->pc = 0x3cdee0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3cdee4:
    // 0x3cdee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cdee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cdee8:
    // 0x3cdee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cdee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cdeec:
    // 0x3cdeec: 0x3e00008  jr          $ra
label_3cdef0:
    if (ctx->pc == 0x3CDEF0u) {
        ctx->pc = 0x3CDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEECu;
        // 0x3cdef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDEF4u;
        goto label_3cdef4;
    }
    ctx->pc = 0x3CDEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDEECu;
        // 0x3cdef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDEF4u;
label_3cdef4:
    // 0x3cdef4: 0x0  nop
    ctx->pc = 0x3cdef4u;
    // NOP
    ctx->pc = 0x3cdef8u;
}
