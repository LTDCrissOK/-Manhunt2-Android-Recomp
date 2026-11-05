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

// Function: sub_00213210
// Address: 0x213210 - 0x213268
void sub_00213210_0x213210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213210_0x213210");
#endif

    switch (ctx->pc) {
        case 0x21322cu: goto label_21322c;
        case 0x21324cu: goto label_21324c;
        default: break;
    }

    ctx->pc = 0x213210u;

    // 0x213210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21321c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21321cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213220: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x213220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x213224: 0xc074256  jal         func_1D0958
    ctx->pc = 0x213224u;
    SET_GPR_U32(ctx, 31, 0x21322Cu);
    ctx->pc = 0x213228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213224u;
    // 0x213228: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x213224u, 0x21322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21322Cu;
label_21322c:
    // 0x21322c: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x21322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x213230: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x213230u;
    {
        const bool branch_taken_0x213230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213230) {
            ctx->pc = 0x213234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213230u;
            // 0x213234: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213258u;
            goto label_213258;
        }
    }
    ctx->pc = 0x213238u;
    // 0x213238: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x213238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x21323c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21323Cu;
    {
        const bool branch_taken_0x21323c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21323c) {
            ctx->pc = 0x213240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21323Cu;
            // 0x213240: 0xae020198  sw          $v0, 0x198($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213254u;
            goto label_213254;
        }
    }
    ctx->pc = 0x213244u;
    // 0x213244: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x213244u;
    SET_GPR_U32(ctx, 31, 0x21324Cu);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x213244u, 0x21324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21324Cu;
label_21324c:
    // 0x21324c: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x21324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x213250: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x213250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_213254:
    // 0x213254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_213258:
    // 0x213258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21325c: 0x3e00008  jr          $ra
    ctx->pc = 0x21325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21325Cu;
        // 0x213260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213264u;
    // 0x213264: 0x0  nop
    ctx->pc = 0x213264u;
    // NOP
    ctx->pc = 0x213268u;
}
