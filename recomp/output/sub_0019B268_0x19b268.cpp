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

// Function: sub_0019B268
// Address: 0x19b268 - 0x19b598
void sub_0019B268_0x19b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B268_0x19b268");
#endif

    switch (ctx->pc) {
        case 0x19b27cu: goto label_19b27c;
        case 0x19b28cu: goto label_19b28c;
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2c8u: goto label_19b2c8;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2e0u: goto label_19b2e0;
        case 0x19b2f0u: goto label_19b2f0;
        case 0x19b300u: goto label_19b300;
        case 0x19b31cu: goto label_19b31c;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b334u: goto label_19b334;
        case 0x19b33cu: goto label_19b33c;
        case 0x19b344u: goto label_19b344;
        case 0x19b578u: goto label_19b578;
        case 0x19b588u: goto label_19b588;
        default: break;
    }

    ctx->pc = 0x19b268u;

    // 0x19b268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b26c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x19b270: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x19b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19b274: 0xc0666e0  jal         func_199B80
    ctx->pc = 0x19B274u;
    SET_GPR_U32(ctx, 31, 0x19B27Cu);
    ctx->pc = 0x19B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B274u;
    // 0x19b278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199B80u, 0x19B274u, 0x19B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B27Cu;
label_19b27c:
    // 0x19b27c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19B27Cu;
    {
        const bool branch_taken_0x19b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b27c) {
            ctx->pc = 0x19B280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B27Cu;
            // 0x19b280: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B2B4u;
            goto label_19b2b4;
        }
    }
    ctx->pc = 0x19B284u;
    // 0x19b284: 0xc0666a4  jal         func_199A90
    ctx->pc = 0x19B284u;
    SET_GPR_U32(ctx, 31, 0x19B28Cu);
    ctx->pc = 0x199A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A90u, 0x19B284u, 0x19B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B28Cu;
label_19b28c:
    // 0x19b28c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B28Cu;
    {
        const bool branch_taken_0x19b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b28c) {
            ctx->pc = 0x19B290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B28Cu;
            // 0x19b290: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B2B4u;
            goto label_19b2b4;
        }
    }
    ctx->pc = 0x19B294u;
    // 0x19b294: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19b298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x19b2a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19b2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19b2a8: 0xc067412  jal         func_19D048
    ctx->pc = 0x19B2A8u;
    SET_GPR_U32(ctx, 31, 0x19B2B0u);
    ctx->pc = 0x19B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2A8u;
    // 0x19b2ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D048u, 0x19B2A8u, 0x19B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2B0u;
label_19b2b0:
    // 0x19b2b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b2b4:
    // 0x19b2b4: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x19b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x19b2b8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19B2B8u;
    {
        const bool branch_taken_0x19b2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b2b8) {
            ctx->pc = 0x19B2F8u;
            goto label_19b2f8;
        }
    }
    ctx->pc = 0x19B2C0u;
    // 0x19b2c0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B2C0u;
    SET_GPR_U32(ctx, 31, 0x19B2C8u);
    ctx->pc = 0x19B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2C0u;
    // 0x19b2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B2C0u, 0x19B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2C8u;
label_19b2c8:
    // 0x19b2c8: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19B2C8u;
    SET_GPR_U32(ctx, 31, 0x19B2D0u);
    ctx->pc = 0x19B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2C8u;
    // 0x19b2cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19B2C8u, 0x19B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2D0u;
label_19b2d0:
    // 0x19b2d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B2D0u;
    {
        const bool branch_taken_0x19b2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b2d0) {
            ctx->pc = 0x19B2E8u;
            goto label_19b2e8;
        }
    }
    ctx->pc = 0x19B2D8u;
    // 0x19b2d8: 0xc067258  jal         func_19C960
    ctx->pc = 0x19B2D8u;
    SET_GPR_U32(ctx, 31, 0x19B2E0u);
    ctx->pc = 0x19B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2D8u;
    // 0x19b2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19B2D8u, 0x19B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2E0u;
label_19b2e0:
    // 0x19b2e0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x19B2E0u;
    {
        const bool branch_taken_0x19b2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2E0u;
        // 0x19b2e4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2e0) {
            ctx->pc = 0x19B58Cu;
            goto label_19b58c;
        }
    }
    ctx->pc = 0x19B2E8u;
label_19b2e8:
    // 0x19b2e8: 0xc067598  jal         func_19D660
    ctx->pc = 0x19B2E8u;
    SET_GPR_U32(ctx, 31, 0x19B2F0u);
    ctx->pc = 0x19B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2E8u;
    // 0x19b2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19B2E8u, 0x19B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F0u;
label_19b2f0:
    // 0x19b2f0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x19B2F0u;
    {
        const bool branch_taken_0x19b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F0u;
        // 0x19b2f4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2f0) {
            ctx->pc = 0x19B58Cu;
            goto label_19b58c;
        }
    }
    ctx->pc = 0x19B2F8u;
label_19b2f8:
    // 0x19b2f8: 0xc0676b8  jal         func_19DAE0
    ctx->pc = 0x19B2F8u;
    SET_GPR_U32(ctx, 31, 0x19B300u);
    ctx->pc = 0x19B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2F8u;
    // 0x19b2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19B2F8u, 0x19B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B300u;
label_19b300:
    // 0x19b300: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B300u;
    {
        const bool branch_taken_0x19b300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b300) {
            ctx->pc = 0x19B324u;
            goto label_19b324;
        }
    }
    ctx->pc = 0x19B308u;
    // 0x19b308: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b30c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B30Cu;
    {
        const bool branch_taken_0x19b30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b30c) {
            ctx->pc = 0x19B324u;
            goto label_19b324;
        }
    }
    ctx->pc = 0x19B314u;
    // 0x19b314: 0xc067178  jal         func_19C5E0
    ctx->pc = 0x19B314u;
    SET_GPR_U32(ctx, 31, 0x19B31Cu);
    ctx->pc = 0x19B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B314u;
    // 0x19b318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5E0u, 0x19B314u, 0x19B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B31Cu;
label_19b31c:
    // 0x19b31c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x19B31Cu;
    {
        const bool branch_taken_0x19b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B31Cu;
        // 0x19b320: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b31c) {
            ctx->pc = 0x19B58Cu;
            goto label_19b58c;
        }
    }
    ctx->pc = 0x19B324u;
label_19b324:
    // 0x19b324: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B324u;
    SET_GPR_U32(ctx, 31, 0x19B32Cu);
    ctx->pc = 0x19B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B324u;
    // 0x19b328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B324u, 0x19B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B32Cu;
label_19b32c:
    // 0x19b32c: 0xc06d9ea  jal         func_1B67A8
    ctx->pc = 0x19B32Cu;
    SET_GPR_U32(ctx, 31, 0x19B334u);
    ctx->pc = 0x19B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B32Cu;
    // 0x19b330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67A8u, 0x19B32Cu, 0x19B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B334u;
label_19b334:
    // 0x19b334: 0xc066c74  jal         func_19B1D0
    ctx->pc = 0x19B334u;
    SET_GPR_U32(ctx, 31, 0x19B33Cu);
    ctx->pc = 0x19B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B334u;
    // 0x19b338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1D0u, 0x19B334u, 0x19B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B33Cu;
label_19b33c:
    // 0x19b33c: 0xc061a26  jal         func_186898
    ctx->pc = 0x19B33Cu;
    SET_GPR_U32(ctx, 31, 0x19B344u);
    ctx->pc = 0x19B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B33Cu;
    // 0x19b340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19B33Cu, 0x19B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B344u;
label_19b344:
    // 0x19b344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19b344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b348: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x19b34c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19b34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19b350: 0x1062008d  beq         $v1, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x19B350u;
    {
        const bool branch_taken_0x19b350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B350u;
        // 0x19b354: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b350) {
            ctx->pc = 0x19B588u;
            goto label_19b588;
        }
    }
    ctx->pc = 0x19B358u;
    // 0x19b358: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b35c: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x19b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x19b360: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x19b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x19b364: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x19b368: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19b368u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b36c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19b36cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b370: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19b370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19b374: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19b374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19b378: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b37c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b380: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b384: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x19b384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19b388: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19b388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19b38c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19b38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19b390: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19b390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19b394: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x19b394u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19b398: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19b398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b39c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19b3a0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x19b3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19b3a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19b3a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x19b3a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19b3a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x19b3ac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x19b3acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x19b3b0: 0x46010044  c1          0x10044
    ctx->pc = 0x19b3b0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x19b3b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19b3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x19b3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b3bc: 0x0  nop
    ctx->pc = 0x19b3bcu;
    // NOP
    // 0x19b3c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b3c4: 0x0  nop
    ctx->pc = 0x19b3c4u;
    // NOP
    // 0x19b3c8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x19B3C8u;
    {
        const bool branch_taken_0x19b3c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3C8u;
        // 0x19b3cc: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3c8) {
            ctx->pc = 0x19B438u;
            goto label_19b438;
        }
    }
    ctx->pc = 0x19B3D0u;
    // 0x19b3d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19b3d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19b3d8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x19b3dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B3DCu;
    {
        const bool branch_taken_0x19b3dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3DCu;
        // 0x19b3e0: 0x246408d4  addiu       $a0, $v1, 0x8D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3dc) {
            ctx->pc = 0x19B3F8u;
            goto label_19b3f8;
        }
    }
    ctx->pc = 0x19B3E4u;
    // 0x19b3e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b3e8: 0x0  nop
    ctx->pc = 0x19b3e8u;
    // NOP
    // 0x19b3ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b3f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19B3F0u;
    {
        const bool branch_taken_0x19b3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3f0) {
            ctx->pc = 0x19B414u;
            goto label_19b414;
        }
    }
    ctx->pc = 0x19B3F8u;
label_19b3f8:
    // 0x19b3f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19b3fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19b404: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b408: 0x0  nop
    ctx->pc = 0x19b408u;
    // NOP
    // 0x19b40c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19b40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19b410: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19b410u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19b414:
    // 0x19b414: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19b418: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b420: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b424: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19b424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19b428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b42c: 0x0  nop
    ctx->pc = 0x19b42cu;
    // NOP
    // 0x19b430: 0x45000055  bc1f        . + 4 + (0x55 << 2)
    ctx->pc = 0x19B430u;
    {
        const bool branch_taken_0x19b430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B430u;
        // 0x19b434: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b430) {
            ctx->pc = 0x19B588u;
            goto label_19b588;
        }
    }
    ctx->pc = 0x19B438u;
label_19b438:
    // 0x19b438: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19b43c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B43Cu;
    {
        const bool branch_taken_0x19b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b43c) {
            ctx->pc = 0x19B480u;
            goto label_19b480;
        }
    }
    ctx->pc = 0x19B444u;
    // 0x19b444: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19b448: 0x8c6208b4  lw          $v0, 0x8B4($v1)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F08B4u));
    // 0x19b44c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19b44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b450: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x19B450u;
    {
        const bool branch_taken_0x19b450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b450) {
            ctx->pc = 0x19B56Cu;
            goto label_19b56c;
        }
    }
    ctx->pc = 0x19B458u;
    // 0x19b458: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19b45c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19b45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19b460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b464: 0xc46008d4  lwc1        $f0, 0x8D4($v1)
    ctx->pc = 0x19b464u;
    { uint32_t bits = FAST_READ32(0x3F08D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b468: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19b468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19b46c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x19b470: 0x4410028  bgez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x19B470u;
    {
        const bool branch_taken_0x19b470 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B470u;
        // 0x19b474: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b470) {
            ctx->pc = 0x19B514u;
            goto label_19b514;
        }
    }
    ctx->pc = 0x19B478u;
    // 0x19b478: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x19B478u;
    {
        const bool branch_taken_0x19b478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B478u;
        // 0x19b47c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b478) {
            ctx->pc = 0x19B52Cu;
            goto label_19b52c;
        }
    }
    ctx->pc = 0x19B480u;
label_19b480:
    // 0x19b480: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19b480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b484: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19b484u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b488: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19b488u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19b48c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x19b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19b490: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x19b490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b494: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b498: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x19b498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b49c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b4a0: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x19b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19b4a4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19b4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19b4a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19b4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19b4ac: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19b4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19b4b0: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x19b4b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19b4b4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b4b8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x19b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19b4bc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x19b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19b4c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19b4c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x19b4c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19b4c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x19b4c8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x19b4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x19b4cc: 0x46010044  c1          0x10044
    ctx->pc = 0x19b4ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x19b4d0: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x19b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b4d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b4d8: 0x0  nop
    ctx->pc = 0x19b4d8u;
    // NOP
    // 0x19b4dc: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x19B4DCu;
    {
        const bool branch_taken_0x19b4dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4DCu;
        // 0x19b4e0: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4dc) {
            ctx->pc = 0x19B580u;
            goto label_19b580;
        }
    }
    ctx->pc = 0x19B4E4u;
    // 0x19b4e4: 0x8c6208b4  lw          $v0, 0x8B4($v1)
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2228)));
    // 0x19b4e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19b4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b4ec: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19B4ECu;
    {
        const bool branch_taken_0x19b4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4ECu;
        // 0x19b4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4ec) {
            ctx->pc = 0x19B56Cu;
            goto label_19b56c;
        }
    }
    ctx->pc = 0x19B4F4u;
    // 0x19b4f4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19b4f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19b4fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b500: 0xc46008d4  lwc1        $f0, 0x8D4($v1)
    ctx->pc = 0x19b500u;
    { uint32_t bits = FAST_READ32(0x3F08D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b504: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19b508: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19b508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x19b50c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B50Cu;
    {
        const bool branch_taken_0x19b50c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B50Cu;
        // 0x19b510: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b50c) {
            ctx->pc = 0x19B528u;
            goto label_19b528;
        }
    }
    ctx->pc = 0x19B514u;
label_19b514:
    // 0x19b514: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b518: 0x0  nop
    ctx->pc = 0x19b518u;
    // NOP
    // 0x19b51c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b520: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19B520u;
    {
        const bool branch_taken_0x19b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b520) {
            ctx->pc = 0x19B544u;
            goto label_19b544;
        }
    }
    ctx->pc = 0x19B528u;
label_19b528:
    // 0x19b528: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19b52c:
    // 0x19b52c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19b530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19b534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b538: 0x0  nop
    ctx->pc = 0x19b538u;
    // NOP
    // 0x19b53c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b540: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19b540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19b544:
    // 0x19b544: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19b548: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19b548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19b54c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b550: 0x0  nop
    ctx->pc = 0x19b550u;
    // NOP
    // 0x19b554: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b558: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19b558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b55c: 0x0  nop
    ctx->pc = 0x19b55cu;
    // NOP
    // 0x19b560: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x19B560u;
    {
        const bool branch_taken_0x19b560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b560) {
            ctx->pc = 0x19B564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B560u;
            // 0x19b564: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B58Cu;
            goto label_19b58c;
        }
    }
    ctx->pc = 0x19B568u;
    // 0x19b568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b56c:
    // 0x19b56c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19b56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b570: 0xc0670a6  jal         func_19C298
    ctx->pc = 0x19B570u;
    SET_GPR_U32(ctx, 31, 0x19B578u);
    ctx->pc = 0x19B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B570u;
    // 0x19b574: 0x24850040  addiu       $a1, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C298u, 0x19B570u, 0x19B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B578u;
label_19b578:
    // 0x19b578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B578u;
    {
        const bool branch_taken_0x19b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b578) {
            ctx->pc = 0x19B58Cu;
            goto label_19b58c;
        }
    }
    ctx->pc = 0x19B580u;
label_19b580:
    // 0x19b580: 0xc066c1e  jal         func_19B078
    ctx->pc = 0x19B580u;
    SET_GPR_U32(ctx, 31, 0x19B588u);
    ctx->pc = 0x19B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B580u;
    // 0x19b584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B078u, 0x19B580u, 0x19B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B588u;
label_19b588:
    // 0x19b588: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19b588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19b58c:
    // 0x19b58c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b590: 0x3e00008  jr          $ra
    ctx->pc = 0x19B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B590u;
        // 0x19b594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B598u;
}
