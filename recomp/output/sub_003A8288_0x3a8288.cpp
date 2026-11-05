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

// Function: sub_003A8288
// Address: 0x3a8288 - 0x3a83c0
void sub_003A8288_0x3a8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8288_0x3a8288");
#endif

    switch (ctx->pc) {
        case 0x3a82a4u: goto label_3a82a4;
        case 0x3a8398u: goto label_3a8398;
        case 0x3a83a8u: goto label_3a83a8;
        default: break;
    }

    ctx->pc = 0x3a8288u;

label_3a8288:
    // 0x3a8288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a828c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a828cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8290: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8290u;
    {
        const bool branch_taken_0x3a8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8290u;
        // 0x3a8294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8290) {
            ctx->pc = 0x3A82B0u;
            goto label_3a82b0;
        }
    }
    ctx->pc = 0x3A8298u;
    // 0x3a8298: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a8298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a829c: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A829Cu;
    SET_GPR_U32(ctx, 31, 0x3A82A4u);
    ctx->pc = 0x3A82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A829Cu;
    // 0x3a82a0: 0x24a5e628  addiu       $a1, $a1, -0x19D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A829Cu, 0x3A82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A82A4u;
label_3a82a4:
    // 0x3a82a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A82A4u;
    {
        const bool branch_taken_0x3a82a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82A4u;
        // 0x3a82a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82a4) {
            ctx->pc = 0x3A82B4u;
            goto label_3a82b4;
        }
    }
    ctx->pc = 0x3A82ACu;
    // 0x3a82ac: 0x0  nop
    ctx->pc = 0x3a82acu;
    // NOP
label_3a82b0:
    // 0x3a82b0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3a82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3a82b4:
    // 0x3a82b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a82b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a82b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A82B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82B8u;
        // 0x3a82bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A82B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A82C0u;
    // 0x3a82c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a82c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a82c4: 0x0  nop
    ctx->pc = 0x3a82c4u;
    // NOP
    // 0x3a82c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a82c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a82cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a82ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a82d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a82d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a82d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82d8: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3A82D8u;
    {
        const bool branch_taken_0x3a82d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82D8u;
        // 0x3a82dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82d8) {
            ctx->pc = 0x3A83B0u;
            goto label_3a83b0;
        }
    }
    ctx->pc = 0x3A82E0u;
    // 0x3a82e0: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x3a82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x3a82e4: 0x10a2002e  beq         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A82E4u;
    {
        const bool branch_taken_0x3a82e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82E4u;
        // 0x3a82e8: 0x28a200ce  slti        $v0, $a1, 0xCE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)206) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82e4) {
            ctx->pc = 0x3A83A0u;
            goto label_3a83a0;
        }
    }
    ctx->pc = 0x3A82ECu;
    // 0x3a82ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A82ECu;
    {
        const bool branch_taken_0x3a82ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82ECu;
        // 0x3a82f0: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82ec) {
            ctx->pc = 0x3A8340u;
            goto label_3a8340;
        }
    }
    ctx->pc = 0x3A82F4u;
    // 0x3a82f4: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x3a82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x3a82f8: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A82F8u;
    {
        const bool branch_taken_0x3a82f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82F8u;
        // 0x3a82fc: 0x28a200cb  slti        $v0, $a1, 0xCB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)203) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82f8) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8300u;
    // 0x3a8300: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8300u;
    {
        const bool branch_taken_0x3a8300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8300u;
        // 0x3a8304: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8300) {
            ctx->pc = 0x3A8328u;
            goto label_3a8328;
        }
    }
    ctx->pc = 0x3A8308u;
    // 0x3a8308: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x3a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3a830c: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A830Cu;
    {
        const bool branch_taken_0x3a830c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A830Cu;
        // 0x3a8310: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a830c) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8314u;
    // 0x3a8314: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A8314u;
    {
        const bool branch_taken_0x3a8314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8314) {
            ctx->pc = 0x3A8390u;
            goto label_3a8390;
        }
    }
    ctx->pc = 0x3A831Cu;
    // 0x3a831c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A831Cu;
    {
        const bool branch_taken_0x3a831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A831Cu;
        // 0x3a8320: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a831c) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8324u;
    // 0x3a8324: 0x0  nop
    ctx->pc = 0x3a8324u;
    // NOP
label_3a8328:
    // 0x3a8328: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A8328u;
    {
        const bool branch_taken_0x3a8328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8328u;
        // 0x3a832c: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8328) {
            ctx->pc = 0x3A83A0u;
            goto label_3a83a0;
        }
    }
    ctx->pc = 0x3A8330u;
    // 0x3a8330: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A8330u;
    {
        const bool branch_taken_0x3a8330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8330u;
        // 0x3a8334: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8330) {
            ctx->pc = 0x3A83B0u;
            goto label_3a83b0;
        }
    }
    ctx->pc = 0x3A8338u;
    // 0x3a8338: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A8338u;
    {
        const bool branch_taken_0x3a8338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8338u;
        // 0x3a833c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8338) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8340u;
label_3a8340:
    // 0x3a8340: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A8340u;
    {
        const bool branch_taken_0x3a8340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8340u;
        // 0x3a8344: 0x28a2012e  slti        $v0, $a1, 0x12E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)302) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8340) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8348u;
    // 0x3a8348: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8348u;
    {
        const bool branch_taken_0x3a8348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8348u;
        // 0x3a834c: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8348) {
            ctx->pc = 0x3A8370u;
            goto label_3a8370;
        }
    }
    ctx->pc = 0x3A8350u;
    // 0x3a8350: 0x2402012b  addiu       $v0, $zero, 0x12B
    ctx->pc = 0x3a8350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x3a8354: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A8354u;
    {
        const bool branch_taken_0x3a8354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8354u;
        // 0x3a8358: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8354) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A835Cu;
    // 0x3a835c: 0x50a20013  beql        $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A835Cu;
    {
        const bool branch_taken_0x3a835c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a835c) {
            ctx->pc = 0x3A8360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A835Cu;
            // 0x3a8360: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8364u;
    // 0x3a8364: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A8364u;
    {
        const bool branch_taken_0x3a8364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8364u;
        // 0x3a8368: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8364) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A836Cu;
    // 0x3a836c: 0x0  nop
    ctx->pc = 0x3a836cu;
    // NOP
label_3a8370:
    // 0x3a8370: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8370u;
    {
        const bool branch_taken_0x3a8370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8370u;
        // 0x3a8374: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8370) {
            ctx->pc = 0x3A8388u;
            goto label_3a8388;
        }
    }
    ctx->pc = 0x3A8378u;
    // 0x3a8378: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A8378u;
    {
        const bool branch_taken_0x3a8378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8378u;
        // 0x3a837c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8378) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8380u;
    // 0x3a8380: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A8380u;
    {
        const bool branch_taken_0x3a8380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8380u;
        // 0x3a8384: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8380) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8388u;
label_3a8388:
    // 0x3a8388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8388u;
    {
        const bool branch_taken_0x3a8388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8388u;
        // 0x3a838c: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8388) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A8390u;
label_3a8390:
    // 0x3a8390: 0xc0ea0a2  jal         func_3A8288
    ctx->pc = 0x3A8390u;
    SET_GPR_U32(ctx, 31, 0x3A8398u);
    ctx->pc = 0x3A8288u;
    goto label_3a8288;
    ctx->pc = 0x3A8398u;
label_3a8398:
    // 0x3a8398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8398u;
    {
        const bool branch_taken_0x3a8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8398u;
        // 0x3a839c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8398) {
            ctx->pc = 0x3A83ACu;
            goto label_3a83ac;
        }
    }
    ctx->pc = 0x3A83A0u;
label_3a83a0:
    // 0x3a83a0: 0xc0e9f36  jal         func_3A7CD8
    ctx->pc = 0x3A83A0u;
    SET_GPR_U32(ctx, 31, 0x3A83A8u);
    ctx->pc = 0x3A7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CD8u, 0x3A83A0u, 0x3A83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A83A8u;
label_3a83a8:
    // 0x3a83a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a83a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a83ac:
    // 0x3a83ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a83acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a83b0:
    // 0x3a83b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a83b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a83b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A83B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A83B4u;
        // 0x3a83b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A83B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A83BCu;
    // 0x3a83bc: 0x0  nop
    ctx->pc = 0x3a83bcu;
    // NOP
    ctx->pc = 0x3a83c0u;
}
