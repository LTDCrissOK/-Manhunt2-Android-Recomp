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

// Function: sub_00124298
// Address: 0x124298 - 0x124328
void sub_00124298_0x124298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124298_0x124298");
#endif

    switch (ctx->pc) {
        case 0x1242c8u: goto label_1242c8;
        case 0x1242f0u: goto label_1242f0;
        case 0x124304u: goto label_124304;
        default: break;
    }

    ctx->pc = 0x124298u;

    // 0x124298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12429c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1242a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1242a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1242a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1242a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1242a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1242ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1242b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1242b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1242b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1242b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1242bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1242bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242c0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1242C0u;
    SET_GPR_U32(ctx, 31, 0x1242C8u);
    ctx->pc = 0x1242C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242C0u;
    // 0x1242c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1242C0u, 0x1242C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242C8u;
label_1242c8:
    // 0x1242c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1242C8u;
    {
        const bool branch_taken_0x1242c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242C8u;
        // 0x1242cc: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242c8) {
            ctx->pc = 0x1242E0u;
            goto label_1242e0;
        }
    }
    ctx->pc = 0x1242D0u;
    // 0x1242d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1242D0u;
    {
        const bool branch_taken_0x1242d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D0u;
        // 0x1242d4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242d0) {
            ctx->pc = 0x1242E0u;
            goto label_1242e0;
        }
    }
    ctx->pc = 0x1242D8u;
    // 0x1242d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1242D8u;
    {
        const bool branch_taken_0x1242d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D8u;
        // 0x1242dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242d8) {
            ctx->pc = 0x1242E8u;
            goto label_1242e8;
        }
    }
    ctx->pc = 0x1242E0u;
label_1242e0:
    // 0x1242e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1242E0u;
    {
        const bool branch_taken_0x1242e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E0u;
        // 0x1242e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242e0) {
            ctx->pc = 0x124308u;
            goto label_124308;
        }
    }
    ctx->pc = 0x1242E8u;
label_1242e8:
    // 0x1242e8: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x1242E8u;
    SET_GPR_U32(ctx, 31, 0x1242F0u);
    ctx->pc = 0x1242ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242E8u;
    // 0x1242ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x1242E8u, 0x1242F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242F0u;
label_1242f0:
    // 0x1242f0: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1242f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1242f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1242f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1242f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242fc: 0xc042c72  jal         func_10B1C8
    ctx->pc = 0x1242FCu;
    SET_GPR_U32(ctx, 31, 0x124304u);
    ctx->pc = 0x124300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1242FCu;
    // 0x124300: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B1C8u, 0x1242FCu, 0x124304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124304u;
label_124304:
    // 0x124304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124308:
    // 0x124308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12430c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12430cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124314: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12431c: 0x3e00008  jr          $ra
    ctx->pc = 0x12431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12431Cu;
        // 0x124320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12431Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124324u;
    // 0x124324: 0x0  nop
    ctx->pc = 0x124324u;
    // NOP
    ctx->pc = 0x124328u;
}
