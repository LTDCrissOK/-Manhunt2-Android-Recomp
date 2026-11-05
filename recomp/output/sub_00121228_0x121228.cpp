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

// Function: sub_00121228
// Address: 0x121228 - 0x121298
void sub_00121228_0x121228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121228_0x121228");
#endif

    switch (ctx->pc) {
        case 0x12124cu: goto label_12124c;
        case 0x121254u: goto label_121254;
        case 0x12125cu: goto label_12125c;
        case 0x121268u: goto label_121268;
        case 0x121270u: goto label_121270;
        case 0x121278u: goto label_121278;
        case 0x121280u: goto label_121280;
        default: break;
    }

    ctx->pc = 0x121228u;

    // 0x121228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12122c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121230: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x121230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x121234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121238: 0x8e020428  lw          $v0, 0x428($s0)
    ctx->pc = 0x121238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x12123c: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x12123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x121240: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x121240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x121244: 0xc0424a0  jal         func_109280
    ctx->pc = 0x121244u;
    SET_GPR_U32(ctx, 31, 0x12124Cu);
    ctx->pc = 0x121248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121244u;
    // 0x121248: 0xae02042c  sw          $v0, 0x42C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109280u, 0x121244u, 0x12124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12124Cu;
label_12124c:
    // 0x12124c: 0xc04a184  jal         func_128610
    ctx->pc = 0x12124Cu;
    SET_GPR_U32(ctx, 31, 0x121254u);
    ctx->pc = 0x121250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12124Cu;
    // 0x121250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128610u, 0x12124Cu, 0x121254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121254u;
label_121254:
    // 0x121254: 0xc049a12  jal         func_126848
    ctx->pc = 0x121254u;
    SET_GPR_U32(ctx, 31, 0x12125Cu);
    ctx->pc = 0x121258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121254u;
    // 0x121258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126848u, 0x121254u, 0x12125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12125Cu;
label_12125c:
    // 0x12125c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12125cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121260: 0xc04a1cc  jal         func_128730
    ctx->pc = 0x121260u;
    SET_GPR_U32(ctx, 31, 0x121268u);
    ctx->pc = 0x121264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121260u;
    // 0x121264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128730u, 0x121260u, 0x121268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121268u;
label_121268:
    // 0x121268: 0xc049f8e  jal         func_127E38
    ctx->pc = 0x121268u;
    SET_GPR_U32(ctx, 31, 0x121270u);
    ctx->pc = 0x12126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121268u;
    // 0x12126c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127E38u, 0x121268u, 0x121270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121270u;
label_121270:
    // 0x121270: 0xc04a274  jal         func_1289D0
    ctx->pc = 0x121270u;
    SET_GPR_U32(ctx, 31, 0x121278u);
    ctx->pc = 0x121274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121270u;
    // 0x121274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1289D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1289D0u, 0x121270u, 0x121278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121278u;
label_121278:
    // 0x121278: 0xc04a2a0  jal         func_128A80
    ctx->pc = 0x121278u;
    SET_GPR_U32(ctx, 31, 0x121280u);
    ctx->pc = 0x12127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121278u;
    // 0x12127c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128A80u, 0x121278u, 0x121280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121280u;
label_121280:
    // 0x121280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121284: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x121284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121288: 0x3e00008  jr          $ra
    ctx->pc = 0x121288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121288u;
        // 0x12128c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121290u;
    // 0x121290: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x121294: 0x0  nop
    ctx->pc = 0x121294u;
    // NOP
    ctx->pc = 0x121298u;
}
