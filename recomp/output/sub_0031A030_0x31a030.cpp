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

// Function: sub_0031A030
// Address: 0x31a030 - 0x31a088
void sub_0031A030_0x31a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A030_0x31a030");
#endif

    switch (ctx->pc) {
        case 0x31a054u: goto label_31a054;
        case 0x31a06cu: goto label_31a06c;
        default: break;
    }

    ctx->pc = 0x31a030u;

    // 0x31a030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31a038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31a03c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31a03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a040: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31a044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31a044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a048: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31a04c: 0xc0c67fa  jal         func_319FE8
    ctx->pc = 0x31A04Cu;
    SET_GPR_U32(ctx, 31, 0x31A054u);
    ctx->pc = 0x31A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A04Cu;
    // 0x31a050: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319FE8u, 0x31A04Cu, 0x31A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A054u;
label_31a054:
    // 0x31a054: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x31a054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x31a058: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x31a058u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31a05c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x31a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31a060: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31a060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a064: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x31A064u;
    SET_GPR_U32(ctx, 31, 0x31A06Cu);
    ctx->pc = 0x31A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A064u;
    // 0x31a068: 0x24c638e8  addiu       $a2, $a2, 0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x31A064u, 0x31A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A06Cu;
label_31a06c:
    // 0x31a06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31a06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31a070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a074: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31a074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A07Cu;
        // 0x31a080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A084u;
    // 0x31a084: 0x0  nop
    ctx->pc = 0x31a084u;
    // NOP
    ctx->pc = 0x31a088u;
}
