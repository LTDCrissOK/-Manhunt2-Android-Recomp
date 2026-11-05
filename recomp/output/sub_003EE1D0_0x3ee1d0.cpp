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

// Function: sub_003EE1D0
// Address: 0x3ee1d0 - 0x3ee260
void sub_003EE1D0_0x3ee1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE1D0_0x3ee1d0");
#endif

    switch (ctx->pc) {
        case 0x3ee1fcu: goto label_3ee1fc;
        case 0x3ee21cu: goto label_3ee21c;
        default: break;
    }

    ctx->pc = 0x3ee1d0u;

    // 0x3ee1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ee1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ee1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ee1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ee1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ee1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee1e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ee1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ee1e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee1ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE1ECu;
    {
        const bool branch_taken_0x3ee1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE1ECu;
        // 0x3ee1f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee1ec) {
            ctx->pc = 0x3EE210u;
            goto label_3ee210;
        }
    }
    ctx->pc = 0x3EE1F4u;
    // 0x3ee1f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE1F4u;
    SET_GPR_U32(ctx, 31, 0x3EE1FCu);
    ctx->pc = 0x3EE1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE1F4u;
    // 0x3ee1f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE1F4u, 0x3EE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE1FCu;
label_3ee1fc:
    // 0x3ee1fc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ee1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ee200: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee204: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ee204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ee208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE208u;
    {
        const bool branch_taken_0x3ee208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE208u;
        // 0x3ee20c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee208) {
            ctx->pc = 0x3EE22Cu;
            goto label_3ee22c;
        }
    }
    ctx->pc = 0x3EE210u;
label_3ee210:
    // 0x3ee210: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ee210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee214: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE214u;
    SET_GPR_U32(ctx, 31, 0x3EE21Cu);
    ctx->pc = 0x3EE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE214u;
    // 0x3ee218: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE214u, 0x3EE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE21Cu;
label_3ee21c:
    // 0x3ee21c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee220: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ee220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ee224: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ee224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ee228: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ee228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ee22c:
    // 0x3ee22c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ee22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee234: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ee234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ee238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ee238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee23c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ee23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee240: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ee240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee244: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ee244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ee248: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ee248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ee24c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ee24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ee250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ee250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee254: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE254u;
        // 0x3ee258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE25Cu;
    // 0x3ee25c: 0x0  nop
    ctx->pc = 0x3ee25cu;
    // NOP
    ctx->pc = 0x3ee260u;
}
