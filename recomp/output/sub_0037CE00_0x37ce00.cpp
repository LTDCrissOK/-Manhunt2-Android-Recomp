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

// Function: sub_0037CE00
// Address: 0x37ce00 - 0x37ce40
void sub_0037CE00_0x37ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CE00_0x37ce00");
#endif

    switch (ctx->pc) {
        case 0x37ce30u: goto label_37ce30;
        default: break;
    }

    ctx->pc = 0x37ce00u;

    // 0x37ce00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x37ce00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37ce04: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x37ce04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x37ce08: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x37ce08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x37ce0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x37ce0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ce10: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x37ce10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ce14: 0x0  nop
    ctx->pc = 0x37ce14u;
    // NOP
    // 0x37ce18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ce18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37ce1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37ce1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37ce20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ce24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37ce24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37ce28: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37CE28u;
    SET_GPR_U32(ctx, 31, 0x37CE30u);
    ctx->pc = 0x37CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE28u;
    // 0x37ce2c: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37CE28u, 0x37CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE30u;
label_37ce30:
    // 0x37ce30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x37CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE34u;
        // 0x37ce38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CE3Cu;
    // 0x37ce3c: 0x0  nop
    ctx->pc = 0x37ce3cu;
    // NOP
    ctx->pc = 0x37ce40u;
}
