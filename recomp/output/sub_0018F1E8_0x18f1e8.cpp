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

// Function: sub_0018F1E8
// Address: 0x18f1e8 - 0x18f260
void sub_0018F1E8_0x18f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F1E8_0x18f1e8");
#endif

    switch (ctx->pc) {
        case 0x18f1e8u: goto label_18f1e8;
        case 0x18f1ecu: goto label_18f1ec;
        case 0x18f1f0u: goto label_18f1f0;
        case 0x18f1f4u: goto label_18f1f4;
        case 0x18f1f8u: goto label_18f1f8;
        case 0x18f1fcu: goto label_18f1fc;
        case 0x18f200u: goto label_18f200;
        case 0x18f204u: goto label_18f204;
        case 0x18f208u: goto label_18f208;
        case 0x18f20cu: goto label_18f20c;
        case 0x18f210u: goto label_18f210;
        case 0x18f214u: goto label_18f214;
        case 0x18f218u: goto label_18f218;
        case 0x18f21cu: goto label_18f21c;
        case 0x18f220u: goto label_18f220;
        case 0x18f224u: goto label_18f224;
        case 0x18f228u: goto label_18f228;
        case 0x18f22cu: goto label_18f22c;
        case 0x18f230u: goto label_18f230;
        case 0x18f234u: goto label_18f234;
        case 0x18f238u: goto label_18f238;
        case 0x18f23cu: goto label_18f23c;
        case 0x18f240u: goto label_18f240;
        case 0x18f244u: goto label_18f244;
        case 0x18f248u: goto label_18f248;
        case 0x18f24cu: goto label_18f24c;
        case 0x18f250u: goto label_18f250;
        case 0x18f254u: goto label_18f254;
        case 0x18f258u: goto label_18f258;
        case 0x18f25cu: goto label_18f25c;
        default: break;
    }

    ctx->pc = 0x18f1e8u;

label_18f1e8:
    // 0x18f1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18f1ec:
    // 0x18f1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18f1f0:
    // 0x18f1f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18f1f4:
    // 0x18f1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f1f8:
    // 0x18f1f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x18f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_18f1fc:
    // 0x18f1fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f200:
    // 0x18f200: 0xc0f7200  jal         func_3DC800
label_18f204:
    if (ctx->pc == 0x18F204u) {
        ctx->pc = 0x18F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F200u;
        // 0x18f204: 0x2484ef70  addiu       $a0, $a0, -0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F208u;
        goto label_18f208;
    }
    ctx->pc = 0x18F200u;
    SET_GPR_U32(ctx, 31, 0x18F208u);
    ctx->pc = 0x18F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F200u;
    // 0x18f204: 0x2484ef70  addiu       $a0, $a0, -0x1090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x18F200u, 0x18F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F208u;
label_18f208:
    // 0x18f208: 0xc061a16  jal         func_186858
label_18f20c:
    if (ctx->pc == 0x18F20Cu) {
        ctx->pc = 0x18F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F208u;
        // 0x18f20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F210u;
        goto label_18f210;
    }
    ctx->pc = 0x18F208u;
    SET_GPR_U32(ctx, 31, 0x18F210u);
    ctx->pc = 0x18F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F208u;
    // 0x18f20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F208u, 0x18F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F210u;
label_18f210:
    // 0x18f210: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18f210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18f214:
    // 0x18f214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f218:
    // 0x18f218: 0x0  nop
    ctx->pc = 0x18f218u;
    // NOP
label_18f21c:
    // 0x18f21c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18f220:
    // 0x18f220: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18f224:
    // 0x18f224: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f228:
    // 0x18f228: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18f22c:
    // 0x18f22c: 0x40f809  jalr        $v0
label_18f230:
    if (ctx->pc == 0x18F230u) {
        ctx->pc = 0x18F234u;
        goto label_18f234;
    }
    ctx->pc = 0x18F22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F234u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F22Cu, 0x18F234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F234u;
label_18f234:
    // 0x18f234: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18f238:
    // 0x18f238: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_18f23c:
    if (ctx->pc == 0x18F23Cu) {
        ctx->pc = 0x18F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F238u;
        // 0x18f23c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F240u;
        goto label_18f240;
    }
    ctx->pc = 0x18F238u;
    {
        const bool branch_taken_0x18f238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F238u;
        // 0x18f23c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f238) {
            ctx->pc = 0x18F254u;
            goto label_18f254;
        }
    }
    ctx->pc = 0x18F240u;
label_18f240:
    // 0x18f240: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f244:
    // 0x18f244: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18f248:
    // 0x18f248: 0x40f809  jalr        $v0
label_18f24c:
    if (ctx->pc == 0x18F24Cu) {
        ctx->pc = 0x18F250u;
        goto label_18f250;
    }
    ctx->pc = 0x18F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F248u, 0x18F250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F250u;
label_18f250:
    // 0x18f250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f254:
    // 0x18f254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18f258:
    // 0x18f258: 0x3e00008  jr          $ra
label_18f25c:
    if (ctx->pc == 0x18F25Cu) {
        ctx->pc = 0x18F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F258u;
        // 0x18f25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F260u;
        goto label_fallthrough_0x18f258;
    }
    ctx->pc = 0x18F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F258u;
        // 0x18f25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f258:
    ctx->pc = 0x18F260u;
}
