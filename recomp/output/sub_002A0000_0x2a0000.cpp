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

// Function: sub_002A0000
// Address: 0x2a0000 - 0x2a0370
void sub_002A0000_0x2a0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0000_0x2a0000");
#endif

    switch (ctx->pc) {
        case 0x2a000cu: goto label_2a000c;
        case 0x2a0034u: goto label_2a0034;
        case 0x2a0048u: goto label_2a0048;
        case 0x2a0060u: goto label_2a0060;
        case 0x2a0088u: goto label_2a0088;
        case 0x2a009cu: goto label_2a009c;
        case 0x2a00b4u: goto label_2a00b4;
        case 0x2a00f4u: goto label_2a00f4;
        case 0x2a0118u: goto label_2a0118;
        case 0x2a0130u: goto label_2a0130;
        case 0x2a0170u: goto label_2a0170;
        case 0x2a0180u: goto label_2a0180;
        case 0x2a0198u: goto label_2a0198;
        case 0x2a01d8u: goto label_2a01d8;
        case 0x2a01e8u: goto label_2a01e8;
        case 0x2a0200u: goto label_2a0200;
        case 0x2a0230u: goto label_2a0230;
        case 0x2a0254u: goto label_2a0254;
        case 0x2a0268u: goto label_2a0268;
        case 0x2a026cu: goto label_2a026c;
        case 0x2a0270u: goto label_2a0270;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a028cu: goto label_2a028c;
        case 0x2a02a0u: goto label_2a02a0;
        case 0x2a02acu: goto label_2a02ac;
        case 0x2a02bcu: goto label_2a02bc;
        case 0x2a02c8u: goto label_2a02c8;
        case 0x2a02d8u: goto label_2a02d8;
        case 0x2a02e4u: goto label_2a02e4;
        case 0x2a02e8u: goto label_2a02e8;
        case 0x2a02f0u: goto label_2a02f0;
        case 0x2a02fcu: goto label_2a02fc;
        case 0x2a0308u: goto label_2a0308;
        case 0x2a0314u: goto label_2a0314;
        case 0x2a0320u: goto label_2a0320;
        case 0x2a032cu: goto label_2a032c;
        case 0x2a0338u: goto label_2a0338;
        default: break;
    }

    ctx->pc = 0x2a0000u;

    // 0x2a0000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0004: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0004u;
    SET_GPR_U32(ctx, 31, 0x2A000Cu);
    ctx->pc = 0x2A0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0004u;
    // 0x2a0008: 0x24a5c758  addiu       $a1, $a1, -0x38A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0004u, 0x2A000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A000Cu;
label_2a000c:
    // 0x2a000c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0010: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A0010u;
    {
        const bool branch_taken_0x2a0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0010u;
        // 0x2a0014: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0010) {
            ctx->pc = 0x2A0050u;
            goto label_2a0050;
        }
    }
    ctx->pc = 0x2A0018u;
    // 0x2a0018: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2a0018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a001c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0020: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a0020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0024: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a0028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a002c: 0xc09e53a  jal         func_2794E8
    ctx->pc = 0x2A002Cu;
    SET_GPR_U32(ctx, 31, 0x2A0034u);
    ctx->pc = 0x2A0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A002Cu;
    // 0x2a0030: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794E8u, 0x2A002Cu, 0x2A0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0034u;
label_2a0034:
    // 0x2a0034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0038: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a003c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0040: 0xc0a6268  jal         func_2989A0
    ctx->pc = 0x2A0040u;
    SET_GPR_U32(ctx, 31, 0x2A0048u);
    ctx->pc = 0x2A0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0040u;
    // 0x2a0044: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2989A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2989A0u, 0x2A0040u, 0x2A0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0048u;
label_2a0048:
    // 0x2a0048: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2A0048u;
    {
        const bool branch_taken_0x2a0048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0048u;
        // 0x2a004c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0048) {
            ctx->pc = 0x2A02E4u;
            goto label_2a02e4;
        }
    }
    ctx->pc = 0x2A0050u;
label_2a0050:
    // 0x2a0050: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a0050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a0054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0058: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0058u;
    SET_GPR_U32(ctx, 31, 0x2A0060u);
    ctx->pc = 0x2A005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0058u;
    // 0x2a005c: 0x24a5c768  addiu       $a1, $a1, -0x3898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0058u, 0x2A0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0060u;
label_2a0060:
    // 0x2a0060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0064: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A0064u;
    {
        const bool branch_taken_0x2a0064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0064u;
        // 0x2a0068: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0064) {
            ctx->pc = 0x2A00A4u;
            goto label_2a00a4;
        }
    }
    ctx->pc = 0x2A006Cu;
    // 0x2a006c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0070: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a0070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0074: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a0074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a007c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a007cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0080: 0xc09e53a  jal         func_2794E8
    ctx->pc = 0x2A0080u;
    SET_GPR_U32(ctx, 31, 0x2A0088u);
    ctx->pc = 0x2A0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0080u;
    // 0x2a0084: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2794E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2794E8u, 0x2A0080u, 0x2A0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0088u;
label_2a0088:
    // 0x2a0088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a008c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a008cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0090: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0094: 0xc0a6334  jal         func_298CD0
    ctx->pc = 0x2A0094u;
    SET_GPR_U32(ctx, 31, 0x2A009Cu);
    ctx->pc = 0x2A0098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0094u;
    // 0x2a0098: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298CD0u, 0x2A0094u, 0x2A009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A009Cu;
label_2a009c:
    // 0x2a009c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2A009Cu;
    {
        const bool branch_taken_0x2a009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A009Cu;
        // 0x2a00a0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a009c) {
            ctx->pc = 0x2A02E4u;
            goto label_2a02e4;
        }
    }
    ctx->pc = 0x2A00A4u;
label_2a00a4:
    // 0x2a00a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a00a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a00a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A00ACu;
    SET_GPR_U32(ctx, 31, 0x2A00B4u);
    ctx->pc = 0x2A00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00ACu;
    // 0x2a00b0: 0x24a5c778  addiu       $a1, $a1, -0x3888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A00ACu, 0x2A00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00B4u;
label_2a00b4:
    // 0x2a00b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a00b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a00b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A00B8u;
    {
        const bool branch_taken_0x2a00b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00B8u;
        // 0x2a00bc: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00b8) {
            ctx->pc = 0x2A0120u;
            goto label_2a0120;
        }
    }
    ctx->pc = 0x2A00C0u;
    // 0x2a00c0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2a00c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a00c4: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a00c8: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x2a00c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a00cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a00ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a00d0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a00d4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a00d8: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2a00d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a00dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a00dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00e0: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2a00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2a00e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a00e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00e8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2a00e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00ec: 0xc09e606  jal         func_279818
    ctx->pc = 0x2A00ECu;
    SET_GPR_U32(ctx, 31, 0x2A00F4u);
    ctx->pc = 0x2A00F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00ECu;
    // 0x2a00f0: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279818u, 0x2A00ECu, 0x2A00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00F4u;
label_2a00f4:
    // 0x2a00f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a00f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a00f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00fc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a00fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0100: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x2a0100u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0104: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a0104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0108: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a0108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a010c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0110: 0xc0a6a26  jal         func_29A898
    ctx->pc = 0x2A0110u;
    SET_GPR_U32(ctx, 31, 0x2A0118u);
    ctx->pc = 0x2A0114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0110u;
    // 0x2a0114: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A898u, 0x2A0110u, 0x2A0118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0118u;
label_2a0118:
    // 0x2a0118: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2A0118u;
    {
        const bool branch_taken_0x2a0118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0118u;
        // 0x2a011c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0118) {
            ctx->pc = 0x2A02E4u;
            goto label_2a02e4;
        }
    }
    ctx->pc = 0x2A0120u;
label_2a0120:
    // 0x2a0120: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a0124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0128: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0128u;
    SET_GPR_U32(ctx, 31, 0x2A0130u);
    ctx->pc = 0x2A012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0128u;
    // 0x2a012c: 0x24a5c788  addiu       $a1, $a1, -0x3878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0128u, 0x2A0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0130u;
label_2a0130:
    // 0x2a0130: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0134: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A0134u;
    {
        const bool branch_taken_0x2a0134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0134u;
        // 0x2a0138: 0x27b100f0  addiu       $s1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0134) {
            ctx->pc = 0x2A0188u;
            goto label_2a0188;
        }
    }
    ctx->pc = 0x2A013Cu;
    // 0x2a013c: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0140: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x2a0140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0144: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0148: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2a0148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2a014c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0150: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2a0150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x2a0154: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0158: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2a0158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2a015c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a015cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0160: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2a0160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2a0164: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2a0164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2a0168: 0xc09e21e  jal         func_278878
    ctx->pc = 0x2A0168u;
    SET_GPR_U32(ctx, 31, 0x2A0170u);
    ctx->pc = 0x2A016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0168u;
    // 0x2a016c: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278878u, 0x2A0168u, 0x2A0170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0170u;
label_2a0170:
    // 0x2a0170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0178: 0xc0a46b8  jal         func_291AE0
    ctx->pc = 0x2A0178u;
    SET_GPR_U32(ctx, 31, 0x2A0180u);
    ctx->pc = 0x2A017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0178u;
    // 0x2a017c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291AE0u, 0x2A0178u, 0x2A0180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0180u;
label_2a0180:
    // 0x2a0180: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2A0180u;
    {
        const bool branch_taken_0x2a0180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0180u;
        // 0x2a0184: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0180) {
            ctx->pc = 0x2A02E4u;
            goto label_2a02e4;
        }
    }
    ctx->pc = 0x2A0188u;
label_2a0188:
    // 0x2a0188: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a018c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0190: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0190u;
    SET_GPR_U32(ctx, 31, 0x2A0198u);
    ctx->pc = 0x2A0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0190u;
    // 0x2a0194: 0x24a5c798  addiu       $a1, $a1, -0x3868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0190u, 0x2A0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0198u;
label_2a0198:
    // 0x2a0198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a019c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A019Cu;
    {
        const bool branch_taken_0x2a019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A019Cu;
        // 0x2a01a0: 0x27b100f0  addiu       $s1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a019c) {
            ctx->pc = 0x2A01F0u;
            goto label_2a01f0;
        }
    }
    ctx->pc = 0x2A01A4u;
    // 0x2a01a4: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2a01a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a01a8: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a01ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01b0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2a01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2a01b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01b8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2a01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x2a01bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a01bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01c0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2a01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2a01c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a01c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01c8: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2a01c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2a01cc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2a01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2a01d0: 0xc09e21e  jal         func_278878
    ctx->pc = 0x2A01D0u;
    SET_GPR_U32(ctx, 31, 0x2A01D8u);
    ctx->pc = 0x2A01D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01D0u;
    // 0x2a01d4: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278878u, 0x2A01D0u, 0x2A01D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01D8u;
label_2a01d8:
    // 0x2a01d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a01dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01e0: 0xc0a6b62  jal         func_29AD88
    ctx->pc = 0x2A01E0u;
    SET_GPR_U32(ctx, 31, 0x2A01E8u);
    ctx->pc = 0x2A01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01E0u;
    // 0x2a01e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AD88u, 0x2A01E0u, 0x2A01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01E8u;
label_2a01e8:
    // 0x2a01e8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2A01E8u;
    {
        const bool branch_taken_0x2a01e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A01E8u;
        // 0x2a01ec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01e8) {
            ctx->pc = 0x2A02E4u;
            goto label_2a02e4;
        }
    }
    ctx->pc = 0x2A01F0u;
label_2a01f0:
    // 0x2a01f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a01f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a01f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A01F8u;
    SET_GPR_U32(ctx, 31, 0x2A0200u);
    ctx->pc = 0x2A01FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01F8u;
    // 0x2a01fc: 0x24a5c7b0  addiu       $a1, $a1, -0x3850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A01F8u, 0x2A0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0200u;
label_2a0200:
    // 0x2a0200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0204: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A0204u;
    {
        const bool branch_taken_0x2a0204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0204u;
        // 0x2a0208: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0204) {
            ctx->pc = 0x2A0280u;
            goto label_2a0280;
        }
    }
    ctx->pc = 0x2A020Cu;
    // 0x2a020c: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x2a020cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a0210: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2a0210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2a0214: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2a0214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x2a0218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a021c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2a021cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2a0220: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2a0220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2a0224: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2a0224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2a0228: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0228u;
    SET_GPR_U32(ctx, 31, 0x2A0230u);
    ctx->pc = 0x2A022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0228u;
    // 0x2a022c: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0228u, 0x2A0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0230u;
label_2a0230:
    // 0x2a0230: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2a0230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0234: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x2a0234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a0238: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x2a0238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a023c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a023cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0244: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0248: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a0248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a024c: 0xc09e230  jal         func_2788C0
    ctx->pc = 0x2A024Cu;
    SET_GPR_U32(ctx, 31, 0x2A0254u);
    ctx->pc = 0x2A0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A024Cu;
    // 0x2a0250: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2788C0u, 0x2A024Cu, 0x2A0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0254u;
label_2a0254:
    // 0x2a0254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a025c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a025cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0260: 0xc0a42f0  jal         func_290BC0
    ctx->pc = 0x2A0260u;
    SET_GPR_U32(ctx, 31, 0x2A0268u);
    ctx->pc = 0x2A0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0260u;
    // 0x2a0264: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290BC0u, 0x2A0260u, 0x2A0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0268u;
label_2a0268:
    // 0x2a0268: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a0268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a026c:
    // 0x2a026c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a026cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0270:
    // 0x2a0270: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0270u;
    SET_GPR_U32(ctx, 31, 0x2A0278u);
    ctx->pc = 0x2A0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0270u;
    // 0x2a0274: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0270u, 0x2A0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0278u;
label_2a0278:
    // 0x2a0278: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A0278u;
    {
        const bool branch_taken_0x2a0278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0278u;
        // 0x2a027c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0278) {
            ctx->pc = 0x2A02E8u;
            goto label_2a02e8;
        }
    }
    ctx->pc = 0x2A0280u;
label_2a0280:
    // 0x2a0280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0284: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A0284u;
    SET_GPR_U32(ctx, 31, 0x2A028Cu);
    ctx->pc = 0x2A0288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0284u;
    // 0x2a0288: 0x24a5c7c0  addiu       $a1, $a1, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A0284u, 0x2A028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A028Cu;
label_2a028c:
    // 0x2a028c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0290: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A0290u;
    {
        const bool branch_taken_0x2a0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0290u;
        // 0x2a0294: 0x27b100e0  addiu       $s1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0290) {
            ctx->pc = 0x2A02E4u;
            goto label_2a02e4;
        }
    }
    ctx->pc = 0x2A0298u;
    // 0x2a0298: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A0298u;
    SET_GPR_U32(ctx, 31, 0x2A02A0u);
    ctx->pc = 0x2A029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0298u;
    // 0x2a029c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A0298u, 0x2A02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02A0u;
label_2a02a0:
    // 0x2a02a0: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2a02a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a02a4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A02A4u;
    SET_GPR_U32(ctx, 31, 0x2A02ACu);
    ctx->pc = 0x2A02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02A4u;
    // 0x2a02a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A02A4u, 0x2A02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02ACu;
label_2a02ac:
    // 0x2a02ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a02acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a02b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02b4: 0xc09e3ee  jal         func_278FB8
    ctx->pc = 0x2A02B4u;
    SET_GPR_U32(ctx, 31, 0x2A02BCu);
    ctx->pc = 0x2A02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02B4u;
    // 0x2a02b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278FB8u, 0x2A02B4u, 0x2A02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02BCu;
label_2a02bc:
    // 0x2a02bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a02bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02c0: 0xc0a6ae2  jal         func_29AB88
    ctx->pc = 0x2A02C0u;
    SET_GPR_U32(ctx, 31, 0x2A02C8u);
    ctx->pc = 0x2A02C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02C0u;
    // 0x2a02c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AB88u, 0x2A02C0u, 0x2A02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02C8u;
label_2a02c8:
    // 0x2a02c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a02ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a02d0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A02D0u;
    SET_GPR_U32(ctx, 31, 0x2A02D8u);
    ctx->pc = 0x2A02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02D0u;
    // 0x2a02d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A02D0u, 0x2A02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02D8u;
label_2a02d8:
    // 0x2a02d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02dc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A02DCu;
    SET_GPR_U32(ctx, 31, 0x2A02E4u);
    ctx->pc = 0x2A02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02DCu;
    // 0x2a02e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A02DCu, 0x2A02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02E4u;
label_2a02e4:
    // 0x2a02e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a02e8:
    // 0x2a02e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A02E8u;
    SET_GPR_U32(ctx, 31, 0x2A02F0u);
    ctx->pc = 0x2A02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02E8u;
    // 0x2a02ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A02E8u, 0x2A02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02F0u;
label_2a02f0:
    // 0x2a02f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a02f4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A02F4u;
    SET_GPR_U32(ctx, 31, 0x2A02FCu);
    ctx->pc = 0x2A02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02F4u;
    // 0x2a02f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A02F4u, 0x2A02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02FCu;
label_2a02fc:
    // 0x2a02fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0300: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0300u;
    SET_GPR_U32(ctx, 31, 0x2A0308u);
    ctx->pc = 0x2A0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0300u;
    // 0x2a0304: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0300u, 0x2A0308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0308u;
label_2a0308:
    // 0x2a0308: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a030c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A030Cu;
    SET_GPR_U32(ctx, 31, 0x2A0314u);
    ctx->pc = 0x2A0310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A030Cu;
    // 0x2a0310: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A030Cu, 0x2A0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0314u;
label_2a0314:
    // 0x2a0314: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a0314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a0318: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0318u;
    SET_GPR_U32(ctx, 31, 0x2A0320u);
    ctx->pc = 0x2A031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0318u;
    // 0x2a031c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0318u, 0x2A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0320u;
label_2a0320:
    // 0x2a0320: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a0320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0324: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0324u;
    SET_GPR_U32(ctx, 31, 0x2A032Cu);
    ctx->pc = 0x2A0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0324u;
    // 0x2a0328: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0324u, 0x2A032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A032Cu;
label_2a032c:
    // 0x2a032c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0330: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0330u;
    SET_GPR_U32(ctx, 31, 0x2A0338u);
    ctx->pc = 0x2A0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0330u;
    // 0x2a0334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0330u, 0x2A0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0338u;
label_2a0338:
    // 0x2a0338: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a0338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a033c: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x2a033cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2a0340: 0xdfb10238  ld          $s1, 0x238($sp)
    ctx->pc = 0x2a0340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2a0344: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x2a0344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2a0348: 0xdfb30248  ld          $s3, 0x248($sp)
    ctx->pc = 0x2a0348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2a034c: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x2a034cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2a0350: 0xdfb50258  ld          $s5, 0x258($sp)
    ctx->pc = 0x2a0350u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2a0354: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x2a0354u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2a0358: 0xdfb70268  ld          $s7, 0x268($sp)
    ctx->pc = 0x2a0358u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x2a035c: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x2a035cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2a0360: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x2a0360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2a0364: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0364u;
        // 0x2a0368: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A036Cu;
    // 0x2a036c: 0x0  nop
    ctx->pc = 0x2a036cu;
    // NOP
    ctx->pc = 0x2a0370u;
}
