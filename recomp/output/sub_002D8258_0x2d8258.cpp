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

// Function: sub_002D8258
// Address: 0x2d8258 - 0x2d830c
void sub_002D8258_0x2d8258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8258_0x2d8258");
#endif

    switch (ctx->pc) {
        case 0x2d8258u: goto label_2d8258;
        case 0x2d825cu: goto label_2d825c;
        case 0x2d8260u: goto label_2d8260;
        case 0x2d8264u: goto label_2d8264;
        case 0x2d8268u: goto label_2d8268;
        case 0x2d826cu: goto label_2d826c;
        case 0x2d8270u: goto label_2d8270;
        case 0x2d8274u: goto label_2d8274;
        case 0x2d8278u: goto label_2d8278;
        case 0x2d827cu: goto label_2d827c;
        case 0x2d8280u: goto label_2d8280;
        case 0x2d8284u: goto label_2d8284;
        case 0x2d8288u: goto label_2d8288;
        case 0x2d828cu: goto label_2d828c;
        case 0x2d8290u: goto label_2d8290;
        case 0x2d8294u: goto label_2d8294;
        case 0x2d8298u: goto label_2d8298;
        case 0x2d829cu: goto label_2d829c;
        case 0x2d82a0u: goto label_2d82a0;
        case 0x2d82a4u: goto label_2d82a4;
        case 0x2d82a8u: goto label_2d82a8;
        case 0x2d82acu: goto label_2d82ac;
        case 0x2d82b0u: goto label_2d82b0;
        case 0x2d82b4u: goto label_2d82b4;
        case 0x2d82b8u: goto label_2d82b8;
        case 0x2d82bcu: goto label_2d82bc;
        case 0x2d82c0u: goto label_2d82c0;
        case 0x2d82c4u: goto label_2d82c4;
        case 0x2d82c8u: goto label_2d82c8;
        case 0x2d82ccu: goto label_2d82cc;
        case 0x2d82d0u: goto label_2d82d0;
        case 0x2d82d4u: goto label_2d82d4;
        case 0x2d82d8u: goto label_2d82d8;
        case 0x2d82dcu: goto label_2d82dc;
        case 0x2d82e0u: goto label_2d82e0;
        case 0x2d82e4u: goto label_2d82e4;
        case 0x2d82e8u: goto label_2d82e8;
        case 0x2d82ecu: goto label_2d82ec;
        case 0x2d82f0u: goto label_2d82f0;
        case 0x2d82f4u: goto label_2d82f4;
        case 0x2d82f8u: goto label_2d82f8;
        case 0x2d82fcu: goto label_2d82fc;
        case 0x2d8300u: goto label_2d8300;
        case 0x2d8304u: goto label_2d8304;
        case 0x2d8308u: goto label_2d8308;
        default: break;
    }

    ctx->pc = 0x2d8258u;

label_2d8258:
    // 0x2d8258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d825c:
    // 0x2d825c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d8260:
    // 0x2d8260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d8260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2d8264:
    // 0x2d8264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8268:
    // 0x2d8268: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d8268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d826c:
    // 0x2d826c: 0x8ca401a4  lw          $a0, 0x1A4($a1)
    ctx->pc = 0x2d826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 420)));
label_2d8270:
    // 0x2d8270: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_2d8274:
    if (ctx->pc == 0x2D8274u) {
        ctx->pc = 0x2D8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8270u;
        // 0x2d8274: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8278u;
        goto label_2d8278;
    }
    ctx->pc = 0x2D8270u;
    {
        const bool branch_taken_0x2d8270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8270u;
        // 0x2d8274: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8270) {
            ctx->pc = 0x2D829Cu;
            goto label_2d829c;
        }
    }
    ctx->pc = 0x2D8278u;
label_2d8278:
    // 0x2d8278: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x2d8278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_2d827c:
    // 0x2d827c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2d8280:
    // 0x2d8280: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2d8284:
    if (ctx->pc == 0x2D8284u) {
        ctx->pc = 0x2D8288u;
        goto label_2d8288;
    }
    ctx->pc = 0x2D8280u;
    {
        const bool branch_taken_0x2d8280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d8280) {
            ctx->pc = 0x2D8294u;
            goto label_2d8294;
        }
    }
    ctx->pc = 0x2D8288u;
label_2d8288:
    // 0x2d8288: 0x8ca20220  lw          $v0, 0x220($a1)
    ctx->pc = 0x2d8288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
label_2d828c:
    // 0x2d828c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2d8290:
    if (ctx->pc == 0x2D8290u) {
        ctx->pc = 0x2D8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D828Cu;
        // 0x2d8290: 0x8c4401a4  lw          $a0, 0x1A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D8294u;
        goto label_2d8294;
    }
    ctx->pc = 0x2D828Cu;
    {
        const bool branch_taken_0x2d828c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d828c) {
            ctx->pc = 0x2D8290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D828Cu;
            // 0x2d8290: 0x8c4401a4  lw          $a0, 0x1A4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8294u;
            goto label_2d8294;
        }
    }
    ctx->pc = 0x2D8294u;
label_2d8294:
    // 0x2d8294: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2d8298:
    if (ctx->pc == 0x2D8298u) {
        ctx->pc = 0x2D829Cu;
        goto label_2d829c;
    }
    ctx->pc = 0x2D8294u;
    {
        const bool branch_taken_0x2d8294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8294) {
            ctx->pc = 0x2D82ACu;
            goto label_2d82ac;
        }
    }
    ctx->pc = 0x2D829Cu;
label_2d829c:
    // 0x2d829c: 0xc0b4b34  jal         func_2D2CD0
label_2d82a0:
    if (ctx->pc == 0x2D82A0u) {
        ctx->pc = 0x2D82A4u;
        goto label_2d82a4;
    }
    ctx->pc = 0x2D829Cu;
    SET_GPR_U32(ctx, 31, 0x2D82A4u);
    ctx->pc = 0x2D2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CD0u, 0x2D829Cu, 0x2D82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D82A4u;
label_2d82a4:
    // 0x2d82a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d82a8:
    if (ctx->pc == 0x2D82A8u) {
        ctx->pc = 0x2D82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82A4u;
        // 0x2d82a8: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82ACu;
        goto label_2d82ac;
    }
    ctx->pc = 0x2D82A4u;
    {
        const bool branch_taken_0x2d82a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82A4u;
        // 0x2d82a8: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82a4) {
            ctx->pc = 0x2D82BCu;
            goto label_2d82bc;
        }
    }
    ctx->pc = 0x2D82ACu;
label_2d82ac:
    // 0x2d82ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d82acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d82b0:
    // 0x2d82b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d82b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d82b4:
    // 0x2d82b4: 0x0  nop
    ctx->pc = 0x2d82b4u;
    // NOP
label_2d82b8:
    // 0x2d82b8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2d82b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2d82bc:
    // 0x2d82bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d82bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d82c0:
    // 0x2d82c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d82c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d82c4:
    // 0x2d82c4: 0x3e00008  jr          $ra
label_2d82c8:
    if (ctx->pc == 0x2D82C8u) {
        ctx->pc = 0x2D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82C4u;
        // 0x2d82c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82CCu;
        goto label_2d82cc;
    }
    ctx->pc = 0x2D82C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82C4u;
        // 0x2d82c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D82C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D82CCu;
label_2d82cc:
    // 0x2d82cc: 0x0  nop
    ctx->pc = 0x2d82ccu;
    // NOP
label_2d82d0:
    // 0x2d82d0: 0x0  nop
    ctx->pc = 0x2d82d0u;
    // NOP
label_2d82d4:
    // 0x2d82d4: 0x0  nop
    ctx->pc = 0x2d82d4u;
    // NOP
label_2d82d8:
    // 0x2d82d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d82d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d82dc:
    // 0x2d82dc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2d82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2d82e0:
    // 0x2d82e0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2d82e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d82e4:
    // 0x2d82e4: 0x8c6325a4  lw          $v1, 0x25A4($v1)
    ctx->pc = 0x2d82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9636)));
label_2d82e8:
    // 0x2d82e8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2d82e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2d82ec:
    // 0x2d82ec: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2d82f0:
    if (ctx->pc == 0x2D82F0u) {
        ctx->pc = 0x2D82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82ECu;
        // 0x2d82f0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D82F4u;
        goto label_2d82f4;
    }
    ctx->pc = 0x2D82ECu;
    {
        const bool branch_taken_0x2d82ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82ECu;
        // 0x2d82f0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82ec) {
            ctx->pc = 0x2D83ACu;
            return;
        }
    }
    ctx->pc = 0x2D82F4u;
label_2d82f4:
    // 0x2d82f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d82f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d82f8:
    // 0x2d82f8: 0x244210f0  addiu       $v0, $v0, 0x10F0
    ctx->pc = 0x2d82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
label_2d82fc:
    // 0x2d82fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d8300:
    // 0x2d8300: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d8300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d8304:
    // 0x2d8304: 0x800008  jr          $a0
label_2d8308:
    if (ctx->pc == 0x2D8308u) {
        ctx->pc = 0x2D830Cu;
        goto label_fallthrough_0x2d8304;
    }
    ctx->pc = 0x2D8304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8304u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2d8304:
    ctx->pc = 0x2D830Cu;
}
