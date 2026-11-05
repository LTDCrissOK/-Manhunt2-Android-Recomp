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

// Function: sub_0012D1C8
// Address: 0x12d1c8 - 0x12d258
void sub_0012D1C8_0x12d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D1C8_0x12d1c8");
#endif

    switch (ctx->pc) {
        case 0x12d208u: goto label_12d208;
        case 0x12d220u: goto label_12d220;
        case 0x12d228u: goto label_12d228;
        case 0x12d238u: goto label_12d238;
        default: break;
    }

    ctx->pc = 0x12d1c8u;

    // 0x12d1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d1cc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12d1d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d1e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12d1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12d1e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12d1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12d1f0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x12d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12d1f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D1F4u;
    {
        const bool branch_taken_0x12d1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1F4u;
        // 0x12d1f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1f4) {
            ctx->pc = 0x12D208u;
            goto label_12d208;
        }
    }
    ctx->pc = 0x12D1FCu;
    // 0x12d1fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12d200: 0xc04c66e  jal         func_1319B8
    ctx->pc = 0x12D200u;
    SET_GPR_U32(ctx, 31, 0x12D208u);
    ctx->pc = 0x12D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D200u;
    // 0x12d204: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319B8u, 0x12D200u, 0x12D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D208u;
label_12d208:
    // 0x12d208: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x12d208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x12d20c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d210: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x12d210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x12d214: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12d214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d218: 0xc04b52a  jal         func_12D4A8
    ctx->pc = 0x12D218u;
    SET_GPR_U32(ctx, 31, 0x12D220u);
    ctx->pc = 0x12D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D218u;
    // 0x12d21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4A8u, 0x12D218u, 0x12D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D220u;
label_12d220:
    // 0x12d220: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x12D220u;
    SET_GPR_U32(ctx, 31, 0x12D228u);
    ctx->pc = 0x12D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D220u;
    // 0x12d224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x12D220u, 0x12D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D228u;
label_12d228:
    // 0x12d228: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12d228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12d22c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d230: 0xc042136  jal         func_1084D8
    ctx->pc = 0x12D230u;
    SET_GPR_U32(ctx, 31, 0x12D238u);
    ctx->pc = 0x12D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D230u;
    // 0x12d234: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x12D230u, 0x12D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D238u;
label_12d238:
    // 0x12d238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d23c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d244: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12d244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12d248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D24Cu;
        // 0x12d250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D254u;
    // 0x12d254: 0x0  nop
    ctx->pc = 0x12d254u;
    // NOP
    ctx->pc = 0x12d258u;
}
