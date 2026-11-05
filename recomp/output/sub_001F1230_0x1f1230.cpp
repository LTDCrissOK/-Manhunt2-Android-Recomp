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

// Function: sub_001F1230
// Address: 0x1f1230 - 0x1f12a8
void sub_001F1230_0x1f1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1230_0x1f1230");
#endif

    switch (ctx->pc) {
        case 0x1f1278u: goto label_1f1278;
        case 0x1f1298u: goto label_1f1298;
        default: break;
    }

    ctx->pc = 0x1f1230u;

    // 0x1f1230: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1238: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x1f1238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f123c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1240: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1f1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f1244: 0x8c434f9c  lw          $v1, 0x4F9C($v0)
    ctx->pc = 0x1f1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20380)));
    // 0x1f1248: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F1248u;
    {
        const bool branch_taken_0x1f1248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1248u;
        // 0x1f124c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1248) {
            ctx->pc = 0x1F129Cu;
            goto label_1f129c;
        }
    }
    ctx->pc = 0x1F1250u;
    // 0x1f1250: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x1f1250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
    // 0x1f1254: 0x8c464f90  lw          $a2, 0x4F90($v0)
    ctx->pc = 0x1f1254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20368)));
    // 0x1f1258: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1258u;
    {
        const bool branch_taken_0x1f1258 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1258u;
        // 0x1f125c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1258) {
            ctx->pc = 0x1F1270u;
            goto label_1f1270;
        }
    }
    ctx->pc = 0x1F1260u;
    // 0x1f1260: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1260u;
    {
        const bool branch_taken_0x1f1260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1260u;
        // 0x1f1264: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1260) {
            ctx->pc = 0x1F1280u;
            goto label_1f1280;
        }
    }
    ctx->pc = 0x1F1268u;
    // 0x1f1268: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F1268u;
    {
        const bool branch_taken_0x1f1268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1268) {
            ctx->pc = 0x1F129Cu;
            goto label_1f129c;
        }
    }
    ctx->pc = 0x1F1270u;
label_1f1270:
    // 0x1f1270: 0xc07c4aa  jal         func_1F12A8
    ctx->pc = 0x1F1270u;
    SET_GPR_U32(ctx, 31, 0x1F1278u);
    ctx->pc = 0x1F12A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F12A8u, 0x1F1270u, 0x1F1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1278u;
label_1f1278:
    // 0x1f1278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1278u;
    {
        const bool branch_taken_0x1f1278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1278u;
        // 0x1f127c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1278) {
            ctx->pc = 0x1F129Cu;
            goto label_1f129c;
        }
    }
    ctx->pc = 0x1F1280u;
label_1f1280:
    // 0x1f1280: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f1280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f1284: 0x8c4315e8  lw          $v1, 0x15E8($v0)
    ctx->pc = 0x1f1284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x1f1288: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1288u;
    {
        const bool branch_taken_0x1f1288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1288u;
        // 0x1f128c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1288) {
            ctx->pc = 0x1F129Cu;
            goto label_1f129c;
        }
    }
    ctx->pc = 0x1F1290u;
    // 0x1f1290: 0xc07c674  jal         func_1F19D0
    ctx->pc = 0x1F1290u;
    SET_GPR_U32(ctx, 31, 0x1F1298u);
    ctx->pc = 0x1F1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1290u;
    // 0x1f1294: 0xac860140  sw          $a2, 0x140($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F19D0u, 0x1F1290u, 0x1F1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1298u;
label_1f1298:
    // 0x1f1298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f129c:
    // 0x1f129c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F129Cu;
        // 0x1f12a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F129Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F12A4u;
    // 0x1f12a4: 0x0  nop
    ctx->pc = 0x1f12a4u;
    // NOP
    ctx->pc = 0x1f12a8u;
}
