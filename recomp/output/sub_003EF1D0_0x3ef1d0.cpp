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

// Function: sub_003EF1D0
// Address: 0x3ef1d0 - 0x3ef260
void sub_003EF1D0_0x3ef1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF1D0_0x3ef1d0");
#endif

    switch (ctx->pc) {
        case 0x3ef1fcu: goto label_3ef1fc;
        case 0x3ef21cu: goto label_3ef21c;
        default: break;
    }

    ctx->pc = 0x3ef1d0u;

    // 0x3ef1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ef1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ef1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef1e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ef1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ef1e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ef1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef1ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF1ECu;
    {
        const bool branch_taken_0x3ef1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF1ECu;
        // 0x3ef1f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef1ec) {
            ctx->pc = 0x3EF210u;
            goto label_3ef210;
        }
    }
    ctx->pc = 0x3EF1F4u;
    // 0x3ef1f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF1F4u;
    SET_GPR_U32(ctx, 31, 0x3EF1FCu);
    ctx->pc = 0x3EF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF1F4u;
    // 0x3ef1f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF1F4u, 0x3EF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF1FCu;
label_3ef1fc:
    // 0x3ef1fc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ef1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ef200: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef204: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ef204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ef208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF208u;
    {
        const bool branch_taken_0x3ef208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF208u;
        // 0x3ef20c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef208) {
            ctx->pc = 0x3EF22Cu;
            goto label_3ef22c;
        }
    }
    ctx->pc = 0x3EF210u;
label_3ef210:
    // 0x3ef210: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ef210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef214: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF214u;
    SET_GPR_U32(ctx, 31, 0x3EF21Cu);
    ctx->pc = 0x3EF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF214u;
    // 0x3ef218: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF214u, 0x3EF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF21Cu;
label_3ef21c:
    // 0x3ef21c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef220: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ef220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ef224: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ef224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ef228: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ef228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ef22c:
    // 0x3ef22c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef234: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ef234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ef238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ef238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef23c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef240: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef244: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ef244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ef248: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ef248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ef24c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ef24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ef250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef254: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF254u;
        // 0x3ef258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF25Cu;
    // 0x3ef25c: 0x0  nop
    ctx->pc = 0x3ef25cu;
    // NOP
    ctx->pc = 0x3ef260u;
}
