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

// Function: sub_003761E0
// Address: 0x3761e0 - 0x376288
void sub_003761E0_0x3761e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003761E0_0x3761e0");
#endif

    switch (ctx->pc) {
        case 0x37620cu: goto label_37620c;
        case 0x376228u: goto label_376228;
        case 0x376244u: goto label_376244;
        case 0x376260u: goto label_376260;
        case 0x376278u: goto label_376278;
        default: break;
    }

    ctx->pc = 0x3761e0u;

    // 0x3761e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3761e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3761e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3761e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3761e8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3761e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3761ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3761ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3761f0: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x3761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x3761f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3761f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3761f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3761F8u;
    {
        const bool branch_taken_0x3761f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3761FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761F8u;
        // 0x3761fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761f8) {
            ctx->pc = 0x37620Cu;
            goto label_37620c;
        }
    }
    ctx->pc = 0x376200u;
    // 0x376200: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x376200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x376204: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x376204u;
    SET_GPR_U32(ctx, 31, 0x37620Cu);
    ctx->pc = 0x376208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376204u;
    // 0x376208: 0xdc45cd40  ld          $a1, -0x32C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x376204u, 0x37620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37620Cu;
label_37620c:
    // 0x37620c: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x37620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x376210: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x376210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x376214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376214u;
    {
        const bool branch_taken_0x376214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376214u;
        // 0x376218: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376214) {
            ctx->pc = 0x376228u;
            goto label_376228;
        }
    }
    ctx->pc = 0x37621Cu;
    // 0x37621c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x37621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376220: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x376220u;
    SET_GPR_U32(ctx, 31, 0x376228u);
    ctx->pc = 0x376224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376220u;
    // 0x376224: 0xdc45cd48  ld          $a1, -0x32B8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x376220u, 0x376228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376228u;
label_376228:
    // 0x376228: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x376228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x37622c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x37622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x376230: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376230u;
    {
        const bool branch_taken_0x376230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376230u;
        // 0x376234: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376230) {
            ctx->pc = 0x376244u;
            goto label_376244;
        }
    }
    ctx->pc = 0x376238u;
    // 0x376238: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x376238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37623c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x37623Cu;
    SET_GPR_U32(ctx, 31, 0x376244u);
    ctx->pc = 0x376240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37623Cu;
    // 0x376240: 0xdc45cd50  ld          $a1, -0x32B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x37623Cu, 0x376244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376244u;
label_376244:
    // 0x376244: 0x8e02cd00  lw          $v0, -0x3300($s0)
    ctx->pc = 0x376244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x376248: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x376248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x37624c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37624Cu;
    {
        const bool branch_taken_0x37624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37624Cu;
        // 0x376250: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37624c) {
            ctx->pc = 0x376260u;
            goto label_376260;
        }
    }
    ctx->pc = 0x376254u;
    // 0x376254: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x376254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x376258: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x376258u;
    SET_GPR_U32(ctx, 31, 0x376260u);
    ctx->pc = 0x37625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376258u;
    // 0x37625c: 0xdc45cd58  ld          $a1, -0x32A8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294954328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x376258u, 0x376260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376260u;
label_376260:
    // 0x376260: 0x8e03cd00  lw          $v1, -0x3300($s0)
    ctx->pc = 0x376260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954240)));
    // 0x376264: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x376268: 0x3442fe1f  ori         $v0, $v0, 0xFE1F
    ctx->pc = 0x376268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65055);
    // 0x37626c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x376270: 0xc0dd8a2  jal         func_376288
    ctx->pc = 0x376270u;
    SET_GPR_U32(ctx, 31, 0x376278u);
    ctx->pc = 0x376274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376270u;
    // 0x376274: 0xae03cd00  sw          $v1, -0x3300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376288u, 0x376270u, 0x376278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376278u;
label_376278:
    // 0x376278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37627c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376280: 0x3e00008  jr          $ra
    ctx->pc = 0x376280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376280u;
        // 0x376284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376288u;
}
