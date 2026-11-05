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

// Function: sub_0021B198
// Address: 0x21b198 - 0x21b620
void sub_0021B198_0x21b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B198_0x21b198");
#endif

    switch (ctx->pc) {
        case 0x21b208u: goto label_21b208;
        case 0x21b2b8u: goto label_21b2b8;
        case 0x21b2e0u: goto label_21b2e0;
        case 0x21b300u: goto label_21b300;
        case 0x21b32cu: goto label_21b32c;
        case 0x21b3a8u: goto label_21b3a8;
        case 0x21b3d4u: goto label_21b3d4;
        case 0x21b444u: goto label_21b444;
        case 0x21b46cu: goto label_21b46c;
        case 0x21b488u: goto label_21b488;
        case 0x21b4b4u: goto label_21b4b4;
        case 0x21b550u: goto label_21b550;
        case 0x21b580u: goto label_21b580;
        case 0x21b5b8u: goto label_21b5b8;
        case 0x21b5dcu: goto label_21b5dc;
        case 0x21b5f0u: goto label_21b5f0;
        default: break;
    }

    ctx->pc = 0x21b198u;

    // 0x21b198: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21b19c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21b1a0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x21b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x21b1a4: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x21b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x21b1a8: 0x8c4595ac  lw          $a1, -0x6A54($v0)
    ctx->pc = 0x21b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F95ACu));
    // 0x21b1ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21b1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1b0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x21b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x21b1b4: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x21b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x21b1b8: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x21b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x21b1bc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x21b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x21b1c0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x21b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x21b1c4: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x21b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x21b1c8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x21b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x21b1cc: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x21b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x21b1d0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x21b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x21b1d4: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x21b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x21b1d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21b1dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21b1e0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x21b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x21b1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x21b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x21b1e8: 0x10a0005a  beqz        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x21B1E8u;
    {
        const bool branch_taken_0x21b1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1E8u;
        // 0x21b1ec: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1e8) {
            ctx->pc = 0x21B354u;
            goto label_21b354;
        }
    }
    ctx->pc = 0x21B1F0u;
    // 0x21b1f0: 0x27a30054  addiu       $v1, $sp, 0x54
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x21b1f4: 0x3c170020  lui         $s7, 0x20
    ctx->pc = 0x21b1f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32 << 16));
    // 0x21b1f8: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x21b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x21b1fc: 0x27be0058  addiu       $fp, $sp, 0x58
    ctx->pc = 0x21b1fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x21b200: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21b204: 0x0  nop
    ctx->pc = 0x21b204u;
    // NOP
label_21b208:
    // 0x21b208: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x21b208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x21b20c: 0x8c4495a8  lw          $a0, -0x6A58($v0)
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940072)));
    // 0x21b210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b214: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b218: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x21B218u;
    {
        const bool branch_taken_0x21b218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B218u;
        // 0x21b21c: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b218) {
            ctx->pc = 0x21B33Cu;
            goto label_21b33c;
        }
    }
    ctx->pc = 0x21B220u;
    // 0x21b220: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x21b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x21b224: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x21b224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x21b228: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x21b228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x21b22c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x21B22Cu;
    {
        const bool branch_taken_0x21b22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B22Cu;
        // 0x21b230: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b22c) {
            ctx->pc = 0x21B340u;
            goto label_21b340;
        }
    }
    ctx->pc = 0x21B234u;
    // 0x21b234: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x21b234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x21b238: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x21b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x21b23c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x21b23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x21b240: 0x54570040  bnel        $v0, $s7, . + 4 + (0x40 << 2)
    ctx->pc = 0x21B240u;
    {
        const bool branch_taken_0x21b240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x21b240) {
            ctx->pc = 0x21B244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B240u;
            // 0x21b244: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B344u;
            goto label_21b344;
        }
    }
    ctx->pc = 0x21B248u;
    // 0x21b248: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b24c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x21b24cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b250: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x21b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21b254: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x21b254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b258: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B258u;
    {
        const bool branch_taken_0x21b258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B258u;
        // 0x21b25c: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b258) {
            ctx->pc = 0x21B278u;
            goto label_21b278;
        }
    }
    ctx->pc = 0x21B260u;
    // 0x21b260: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21B260u;
    {
        const bool branch_taken_0x21b260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b260) {
            ctx->pc = 0x21B264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B260u;
            // 0x21b264: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B268u;
            goto label_21b268;
        }
    }
    ctx->pc = 0x21B268u;
label_21b268:
    // 0x21b268: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b26c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21b270: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x21B270u;
    {
        const bool branch_taken_0x21b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B270u;
        // 0x21b274: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b270) {
            ctx->pc = 0x21B33Cu;
            goto label_21b33c;
        }
    }
    ctx->pc = 0x21B278u;
label_21b278:
    // 0x21b278: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b280: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x21b280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x21b284: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b288: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21b28c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x21b290: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21b290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x21b294: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x21b294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x21b298: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x21b298u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x21b29c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b2a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b2a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B2A4u;
    {
        const bool branch_taken_0x21b2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2A4u;
        // 0x21b2a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2a4) {
            ctx->pc = 0x21B2C0u;
            goto label_21b2c0;
        }
    }
    ctx->pc = 0x21B2ACu;
    // 0x21b2ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2b0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21B2B0u;
    SET_GPR_U32(ctx, 31, 0x21B2B8u);
    ctx->pc = 0x21B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2B0u;
    // 0x21b2b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21B2B0u, 0x21B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2B8u;
label_21b2b8:
    // 0x21b2b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B2B8u;
    {
        const bool branch_taken_0x21b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b8) {
            ctx->pc = 0x21B2C8u;
            goto label_21b2c8;
        }
    }
    ctx->pc = 0x21B2C0u;
label_21b2c0:
    // 0x21b2c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21b2c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b2c8:
    // 0x21b2c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x21b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21b2cc: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B2CCu;
    {
        const bool branch_taken_0x21b2cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x21B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2CCu;
        // 0x21b2d0: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2cc) {
            ctx->pc = 0x21B2E8u;
            goto label_21b2e8;
        }
    }
    ctx->pc = 0x21B2D4u;
    // 0x21b2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2d8: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x21B2D8u;
    SET_GPR_U32(ctx, 31, 0x21B2E0u);
    ctx->pc = 0x21B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2D8u;
    // 0x21b2dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x21B2D8u, 0x21B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2E0u;
label_21b2e0:
    // 0x21b2e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B2E0u;
    {
        const bool branch_taken_0x21b2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2E0u;
        // 0x21b2e4: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2e0) {
            ctx->pc = 0x21B2ECu;
            goto label_21b2ec;
        }
    }
    ctx->pc = 0x21B2E8u;
label_21b2e8:
    // 0x21b2e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b2ec:
    // 0x21b2ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x21b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21b2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2f4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B2F4u;
    {
        const bool branch_taken_0x21b2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F4u;
        // 0x21b2f8: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2f4) {
            ctx->pc = 0x21B318u;
            goto label_21b318;
        }
    }
    ctx->pc = 0x21B2FCu;
    // 0x21b2fc: 0x0  nop
    ctx->pc = 0x21b2fcu;
    // NOP
label_21b300:
    // 0x21b300: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x21b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21b304: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b308: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21b308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21b30c: 0x0  nop
    ctx->pc = 0x21b30cu;
    // NOP
    // 0x21b310: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21B310u;
    {
        const bool branch_taken_0x21b310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B310u;
        // 0x21b314: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b310) {
            ctx->pc = 0x21B300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b300;
        }
    }
    ctx->pc = 0x21B318u;
label_21b318:
    // 0x21b318: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x21b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21b31c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B31Cu;
    {
        const bool branch_taken_0x21b31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B31Cu;
        // 0x21b320: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b31c) {
            ctx->pc = 0x21B330u;
            goto label_21b330;
        }
    }
    ctx->pc = 0x21B324u;
    // 0x21b324: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21B324u;
    SET_GPR_U32(ctx, 31, 0x21B32Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21B324u, 0x21B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B32Cu;
label_21b32c:
    // 0x21b32c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x21b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_21b330:
    // 0x21b330: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x21b330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x21b334: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x21b334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x21b338: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x21b338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_21b33c:
    // 0x21b33c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21b340:
    // 0x21b340: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x21b340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b344:
    // 0x21b344: 0x8c6295ac  lw          $v0, -0x6A54($v1)
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940076)));
    // 0x21b348: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x21b348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21b34c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x21B34Cu;
    {
        const bool branch_taken_0x21b34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B34Cu;
        // 0x21b350: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b34c) {
            ctx->pc = 0x21B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b208;
        }
    }
    ctx->pc = 0x21B354u;
label_21b354:
    // 0x21b354: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21b354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x21b358: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x21b35c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x21b360: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x21b364: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21b368: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x21b36c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x21b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21b370: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21b370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x21b374: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x21b374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x21b378: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x21b378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x21b37c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x21b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x21b380: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x21b380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x21b384: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x21b384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x21b388: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x21b388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x21b38c: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x21B38Cu;
    {
        const bool branch_taken_0x21b38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B38Cu;
        // 0x21b390: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b38c) {
            ctx->pc = 0x21B4FCu;
            goto label_21b4fc;
        }
    }
    ctx->pc = 0x21B394u;
    // 0x21b394: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x21b398: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x21b398u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21b39c: 0x27b50064  addiu       $s5, $sp, 0x64
    ctx->pc = 0x21b39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x21b3a0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x21b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x21b3a4: 0x0  nop
    ctx->pc = 0x21b3a4u;
    // NOP
label_21b3a8:
    // 0x21b3a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b3ac: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x21b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x21b3b0: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x21b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x21b3b4: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x21b3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x21b3b8: 0x14540043  bne         $v0, $s4, . + 4 + (0x43 << 2)
    ctx->pc = 0x21B3B8u;
    {
        const bool branch_taken_0x21b3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x21B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3B8u;
        // 0x21b3bc: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3b8) {
            ctx->pc = 0x21B4C8u;
            goto label_21b4c8;
        }
    }
    ctx->pc = 0x21B3C0u;
    // 0x21b3c0: 0x27b3005c  addiu       $s3, $sp, 0x5C
    ctx->pc = 0x21b3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x21b3c4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b3c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b3cc: 0xc0f78c4  jal         func_3DE310
    ctx->pc = 0x21B3CCu;
    SET_GPR_U32(ctx, 31, 0x21B3D4u);
    ctx->pc = 0x21B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3CCu;
    // 0x21b3d0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE310u, 0x21B3CCu, 0x21B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3D4u;
label_21b3d4:
    // 0x21b3d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b3d8: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x21B3D8u;
    {
        const bool branch_taken_0x21b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3D8u;
        // 0x21b3dc: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3d8) {
            ctx->pc = 0x21B4C8u;
            goto label_21b4c8;
        }
    }
    ctx->pc = 0x21B3E0u;
    // 0x21b3e0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x21b3e4: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x21b3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x21b3e8: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B3E8u;
    {
        const bool branch_taken_0x21b3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21b3e8) {
            ctx->pc = 0x21B3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3E8u;
            // 0x21b3ec: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B40Cu;
            goto label_21b40c;
        }
    }
    ctx->pc = 0x21B3F0u;
    // 0x21b3f0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21B3F0u;
    {
        const bool branch_taken_0x21b3f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3F0u;
        // 0x21b3f4: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3f0) {
            ctx->pc = 0x21B3FCu;
            goto label_21b3fc;
        }
    }
    ctx->pc = 0x21B3F8u;
    // 0x21b3f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21b3fc:
    // 0x21b3fc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x21b400: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21b404: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21B404u;
    {
        const bool branch_taken_0x21b404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B404u;
        // 0x21b408: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b404) {
            ctx->pc = 0x21B4C4u;
            goto label_21b4c4;
        }
    }
    ctx->pc = 0x21B40Cu;
label_21b40c:
    // 0x21b40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b410: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x21b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x21b414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b418: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x21b418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21b41c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21b41cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x21b420: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x21b420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x21b424: 0x2c3200b  movn        $a0, $s6, $v1
    ctx->pc = 0x21b424u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
    // 0x21b428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b42c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b430: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B430u;
    {
        const bool branch_taken_0x21b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B430u;
        // 0x21b434: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b430) {
            ctx->pc = 0x21B44Cu;
            goto label_21b44c;
        }
    }
    ctx->pc = 0x21B438u;
    // 0x21b438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b43c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21B43Cu;
    SET_GPR_U32(ctx, 31, 0x21B444u);
    ctx->pc = 0x21B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B43Cu;
    // 0x21b440: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21B43Cu, 0x21B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B444u;
label_21b444:
    // 0x21b444: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B444u;
    {
        const bool branch_taken_0x21b444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B444u;
        // 0x21b448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b444) {
            ctx->pc = 0x21B454u;
            goto label_21b454;
        }
    }
    ctx->pc = 0x21B44Cu;
label_21b44c:
    // 0x21b44c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21b450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b454:
    // 0x21b454: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x21b454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b458: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21B458u;
    {
        const bool branch_taken_0x21b458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x21B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B458u;
        // 0x21b45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b458) {
            ctx->pc = 0x21B474u;
            goto label_21b474;
        }
    }
    ctx->pc = 0x21B460u;
    // 0x21b460: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x21b464: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x21B464u;
    SET_GPR_U32(ctx, 31, 0x21B46Cu);
    ctx->pc = 0x21B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B464u;
    // 0x21b468: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x21B464u, 0x21B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B46Cu;
label_21b46c:
    // 0x21b46c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21B46Cu;
    {
        const bool branch_taken_0x21b46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B46Cu;
        // 0x21b470: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b46c) {
            ctx->pc = 0x21B478u;
            goto label_21b478;
        }
    }
    ctx->pc = 0x21B474u;
label_21b474:
    // 0x21b474: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b478:
    // 0x21b478: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x21b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x21b47c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B47Cu;
    {
        const bool branch_taken_0x21b47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B47Cu;
        // 0x21b480: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b47c) {
            ctx->pc = 0x21B4A0u;
            goto label_21b4a0;
        }
    }
    ctx->pc = 0x21B484u;
    // 0x21b484: 0x0  nop
    ctx->pc = 0x21b484u;
    // NOP
label_21b488:
    // 0x21b488: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21b48c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b490: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21b490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21b494: 0x0  nop
    ctx->pc = 0x21b494u;
    // NOP
    // 0x21b498: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21B498u;
    {
        const bool branch_taken_0x21b498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B498u;
        // 0x21b49c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b498) {
            ctx->pc = 0x21B488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b488;
        }
    }
    ctx->pc = 0x21B4A0u;
label_21b4a0:
    // 0x21b4a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x21b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b4a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B4A4u;
    {
        const bool branch_taken_0x21b4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4A4u;
        // 0x21b4a8: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4a4) {
            ctx->pc = 0x21B4B8u;
            goto label_21b4b8;
        }
    }
    ctx->pc = 0x21B4ACu;
    // 0x21b4ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21B4ACu;
    SET_GPR_U32(ctx, 31, 0x21B4B4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21B4ACu, 0x21B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B4B4u;
label_21b4b4:
    // 0x21b4b4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x21b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_21b4b8:
    // 0x21b4b8: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x21b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x21b4bc: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x21b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x21b4c0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x21b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_21b4c4:
    // 0x21b4c4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x21b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_21b4c8:
    // 0x21b4c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B4C8u;
    {
        const bool branch_taken_0x21b4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4c8) {
            ctx->pc = 0x21B4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B4C8u;
            // 0x21b4cc: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B4DCu;
            goto label_21b4dc;
        }
    }
    ctx->pc = 0x21B4D0u;
    // 0x21b4d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21b4d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B4D4u;
    {
        const bool branch_taken_0x21b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D4u;
        // 0x21b4d8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4d4) {
            ctx->pc = 0x21B4ECu;
            goto label_21b4ec;
        }
    }
    ctx->pc = 0x21B4DCu;
label_21b4dc:
    // 0x21b4dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B4DCu;
    {
        const bool branch_taken_0x21b4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4DCu;
        // 0x21b4e0: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4dc) {
            ctx->pc = 0x21B4F0u;
            goto label_21b4f0;
        }
    }
    ctx->pc = 0x21B4E4u;
    // 0x21b4e4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x21b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x21b4e8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x21b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_21b4ec:
    // 0x21b4ec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_21b4f0:
    // 0x21b4f0: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x21b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x21b4f4: 0x1462ffac  bne         $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x21B4F4u;
    {
        const bool branch_taken_0x21b4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4F4u;
        // 0x21b4f8: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4f4) {
            ctx->pc = 0x21B3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b3a8;
        }
    }
    ctx->pc = 0x21B4FCu;
label_21b4fc:
    // 0x21b4fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21b500: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21b500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b504: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x21b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x21b508: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x21b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21b50c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x21b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b510: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21b514: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x21b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x21b518: 0x8c4695ac  lw          $a2, -0x6A54($v0)
    ctx->pc = 0x21b518u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F95ACu));
    // 0x21b51c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21b520: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21b520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x21b524: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21b528: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x21b528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21b52c: 0xac40961c  sw          $zero, -0x69E4($v0)
    ctx->pc = 0x21b52cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F961Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F961Cu, _value); } while (0);
    // 0x21b530: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x21b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21b534: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21b534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21b538: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x21b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x21b53c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21b540: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21b540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x21b544: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x21B544u;
    {
        const bool branch_taken_0x21b544 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x21B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B544u;
        // 0x21b548: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b544) {
            ctx->pc = 0x21B5C8u;
            goto label_21b5c8;
        }
    }
    ctx->pc = 0x21B54Cu;
    // 0x21b54c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_21b550:
    // 0x21b550: 0x8c8395ac  lw          $v1, -0x6A54($a0)
    ctx->pc = 0x21b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940076)));
    // 0x21b554: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x21b554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21b558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21B558u;
    {
        const bool branch_taken_0x21b558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B558u;
        // 0x21b55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b558) {
            ctx->pc = 0x21B588u;
            goto label_21b588;
        }
    }
    ctx->pc = 0x21B560u;
    // 0x21b560: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x21b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x21b564: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x21b568: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x21b568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21b56c: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x21b56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x21b570: 0x27a90078  addiu       $t1, $sp, 0x78
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x21b574: 0x27aa007c  addiu       $t2, $sp, 0x7C
    ctx->pc = 0x21b574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x21b578: 0xc0869f0  jal         func_21A7C0
    ctx->pc = 0x21B578u;
    SET_GPR_U32(ctx, 31, 0x21B580u);
    ctx->pc = 0x21B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B578u;
    // 0x21b57c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7C0u, 0x21B578u, 0x21B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B580u;
label_21b580:
    // 0x21b580: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21B580u;
    {
        const bool branch_taken_0x21b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B580u;
        // 0x21b584: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b580) {
            ctx->pc = 0x21B5BCu;
            goto label_21b5bc;
        }
    }
    ctx->pc = 0x21B588u;
label_21b588:
    // 0x21b588: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21b58c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21b590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21b594: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x21b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x21b598: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x21b59c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21b5a0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x21b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21b5a4: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x21b5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21b5a8: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x21b5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x21b5ac: 0x27a90078  addiu       $t1, $sp, 0x78
    ctx->pc = 0x21b5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x21b5b0: 0xc0869f0  jal         func_21A7C0
    ctx->pc = 0x21B5B0u;
    SET_GPR_U32(ctx, 31, 0x21B5B8u);
    ctx->pc = 0x21B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5B0u;
    // 0x21b5b4: 0x27aa007c  addiu       $t2, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7C0u, 0x21B5B0u, 0x21B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5B8u;
label_21b5b8:
    // 0x21b5b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b5bc:
    // 0x21b5bc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x21b5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21b5c0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x21B5C0u;
    {
        const bool branch_taken_0x21b5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5C0u;
        // 0x21b5c4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c0) {
            ctx->pc = 0x21B550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b550;
        }
    }
    ctx->pc = 0x21B5C8u;
label_21b5c8:
    // 0x21b5c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x21b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b5cc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B5CCu;
    {
        const bool branch_taken_0x21b5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5cc) {
            ctx->pc = 0x21B5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B5CCu;
            // 0x21b5d0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B5E0u;
            goto label_21b5e0;
        }
    }
    ctx->pc = 0x21B5D4u;
    // 0x21b5d4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21B5D4u;
    SET_GPR_U32(ctx, 31, 0x21B5DCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21B5D4u, 0x21B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5DCu;
label_21b5dc:
    // 0x21b5dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21b5e0:
    // 0x21b5e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B5E0u;
    {
        const bool branch_taken_0x21b5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5E0u;
        // 0x21b5e4: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5e0) {
            ctx->pc = 0x21B5F4u;
            goto label_21b5f4;
        }
    }
    ctx->pc = 0x21B5E8u;
    // 0x21b5e8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21B5E8u;
    SET_GPR_U32(ctx, 31, 0x21B5F0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21B5E8u, 0x21B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B5F0u;
label_21b5f0:
    // 0x21b5f0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x21b5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21b5f4:
    // 0x21b5f4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x21b5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b5f8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x21b5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b5fc: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x21b5fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21b600: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x21b600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21b604: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x21b604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21b608: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x21b608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21b60c: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x21b60cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21b610: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x21b610u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21b614: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x21b614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x21b618: 0x3e00008  jr          $ra
    ctx->pc = 0x21B618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B618u;
        // 0x21b61c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B620u;
}
