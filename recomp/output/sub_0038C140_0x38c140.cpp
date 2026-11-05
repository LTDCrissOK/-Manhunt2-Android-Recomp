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

// Function: sub_0038C140
// Address: 0x38c140 - 0x38c698
void sub_0038C140_0x38c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C140_0x38c140");
#endif

    switch (ctx->pc) {
        case 0x38c1b8u: goto label_38c1b8;
        case 0x38c1dcu: goto label_38c1dc;
        case 0x38c23cu: goto label_38c23c;
        case 0x38c254u: goto label_38c254;
        case 0x38c29cu: goto label_38c29c;
        case 0x38c358u: goto label_38c358;
        case 0x38c384u: goto label_38c384;
        case 0x38c3f4u: goto label_38c3f4;
        case 0x38c420u: goto label_38c420;
        case 0x38c480u: goto label_38c480;
        case 0x38c4acu: goto label_38c4ac;
        case 0x38c4dcu: goto label_38c4dc;
        case 0x38c504u: goto label_38c504;
        case 0x38c50cu: goto label_38c50c;
        default: break;
    }

    ctx->pc = 0x38c140u;

    // 0x38c140: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x38c144: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x38c144u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x38c148: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x38c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x38c14c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x38c14cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x38c150: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x38c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x38c154: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x38c154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x38c158: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x38c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x38c15c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38c15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38c160: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x38c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x38c164: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38c164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c168: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x38c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x38c16c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x38c16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c170: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x38c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x38c174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c178: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x38c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x38c17c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x38c17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c180: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x38c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x38c184: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x38c184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c188: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x38c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x38c18c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x38c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x38c190: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x38c190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x38c194: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x38c194u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38c198: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x38c198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x38c19c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38c19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38c1a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x38c1a4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x38c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x38c1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c1ac: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x38c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x38c1b0: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38C1B0u;
    SET_GPR_U32(ctx, 31, 0x38C1B8u);
    ctx->pc = 0x38C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1B0u;
    // 0x38c1b4: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38C1B0u, 0x38C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1B8u;
label_38c1b8:
    // 0x38c1b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c1bc: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x38c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x38c1c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38c1c4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x38c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x38c1c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38c1c8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38c1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c1d0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x38c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x38c1d4: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38C1D4u;
    SET_GPR_U32(ctx, 31, 0x38C1DCu);
    ctx->pc = 0x38C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1D4u;
    // 0x38c1d8: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38C1D4u, 0x38C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1DCu;
label_38c1dc:
    // 0x38c1dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38c1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c1e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38c1e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c1e8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38c1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38c1ec: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38c1f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38c1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38c1f4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38c1f4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38c1f8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38c1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38c1fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38c1fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38c200: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C200u;
    {
        const bool branch_taken_0x38c200 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C200u;
        // 0x38c204: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c200) {
            ctx->pc = 0x38C218u;
            goto label_38c218;
        }
    }
    ctx->pc = 0x38C208u;
    // 0x38c208: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x38c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38c20c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x38c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x38c210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38C210u;
    {
        const bool branch_taken_0x38c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C210u;
        // 0x38c214: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c210) {
            ctx->pc = 0x38C21Cu;
            goto label_38c21c;
        }
    }
    ctx->pc = 0x38C218u;
label_38c218:
    // 0x38c218: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38c21c:
    // 0x38c21c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x38c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x38c220: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x38c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x38c224: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x38c224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38c228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x38c228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x38c22c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38c22cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38c230: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x38c230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38c234: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x38c234u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x38c238: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x38c238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_38c23c:
    // 0x38c23c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38C23Cu;
    {
        const bool branch_taken_0x38c23c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C23Cu;
        // 0x38c240: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c23c) {
            ctx->pc = 0x38C264u;
            goto label_38c264;
        }
    }
    ctx->pc = 0x38C244u;
    // 0x38c244: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38c244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38c248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c24c: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38C24Cu;
    SET_GPR_U32(ctx, 31, 0x38C254u);
    ctx->pc = 0x38C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C24Cu;
    // 0x38c250: 0x24a59560  addiu       $a1, $a1, -0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38C24Cu, 0x38C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C254u;
label_38c254:
    // 0x38c254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c25c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x38C25Cu;
    {
        const bool branch_taken_0x38c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C25Cu;
        // 0x38c260: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c25c) {
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C264u;
label_38c264:
    // 0x38c264: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x38c264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x38c268: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38C268u;
    {
        const bool branch_taken_0x38c268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C268u;
        // 0x38c26c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c268) {
            ctx->pc = 0x38C2A4u;
            goto label_38c2a4;
        }
    }
    ctx->pc = 0x38C270u;
    // 0x38c270: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x38c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x38c274: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38C274u;
    {
        const bool branch_taken_0x38c274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38c274) {
            ctx->pc = 0x38C278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C274u;
            // 0x38c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C294u;
            goto label_38c294;
        }
    }
    ctx->pc = 0x38C27Cu;
    // 0x38c27c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x38c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x38c280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C280u;
    {
        const bool branch_taken_0x38c280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C280u;
        // 0x38c284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c280) {
            ctx->pc = 0x38C290u;
            goto label_38c290;
        }
    }
    ctx->pc = 0x38C288u;
    // 0x38c288: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38C288u;
    {
        const bool branch_taken_0x38c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C288u;
        // 0x38c28c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c288) {
            ctx->pc = 0x38C2D0u;
            goto label_38c2d0;
        }
    }
    ctx->pc = 0x38C290u;
label_38c290:
    // 0x38c290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c294:
    // 0x38c294: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38C294u;
    SET_GPR_U32(ctx, 31, 0x38C29Cu);
    ctx->pc = 0x38C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C294u;
    // 0x38c298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38C294u, 0x38C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C29Cu;
label_38c29c:
    // 0x38c29c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38C29Cu;
    {
        const bool branch_taken_0x38c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C29Cu;
        // 0x38c2a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c29c) {
            ctx->pc = 0x38C2D0u;
            goto label_38c2d0;
        }
    }
    ctx->pc = 0x38C2A4u;
label_38c2a4:
    // 0x38c2a4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x38c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x38c2a8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x38C2A8u;
    {
        const bool branch_taken_0x38c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c2a8) {
            ctx->pc = 0x38C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C2A8u;
            // 0x38c2ac: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C2D4u;
            goto label_38c2d4;
        }
    }
    ctx->pc = 0x38C2B0u;
    // 0x38c2b0: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x38c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x38c2b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38C2B4u;
    {
        const bool branch_taken_0x38c2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2B4u;
        // 0x38c2b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2b4) {
            ctx->pc = 0x38C2D0u;
            goto label_38c2d0;
        }
    }
    ctx->pc = 0x38C2BCu;
    // 0x38c2bc: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x38c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x38c2c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x38c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38c2c4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x38c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x38c2c8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x38c2c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x38c2cc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x38c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_38c2d0:
    // 0x38c2d0: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x38c2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_38c2d4:
    // 0x38c2d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38c2d8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C2D8u;
    {
        const bool branch_taken_0x38c2d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2D8u;
        // 0x38c2dc: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2d8) {
            ctx->pc = 0x38C2FCu;
            goto label_38c2fc;
        }
    }
    ctx->pc = 0x38C2E0u;
    // 0x38c2e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x38c2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c2e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38c2e8: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x38c2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x38c2ec: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x38c2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x38c2f0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x38c2f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x38c2f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38C2F4u;
    {
        const bool branch_taken_0x38c2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2F4u;
        // 0x38c2f8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c2f4) {
            ctx->pc = 0x38C310u;
            goto label_38c310;
        }
    }
    ctx->pc = 0x38C2FCu;
label_38c2fc:
    // 0x38c2fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38c300: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x38c300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c304: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38c304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c308: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x38c308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x38c30c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x38c30cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_38c310:
    // 0x38c310: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x38c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x38c314: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x38c314u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c318: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C318u;
    {
        const bool branch_taken_0x38c318 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C318u;
        // 0x38c31c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c318) {
            ctx->pc = 0x38C328u;
            goto label_38c328;
        }
    }
    ctx->pc = 0x38C320u;
    // 0x38c320: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x38c320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x38c324: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x38c324u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38c328:
    // 0x38c328: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38c32c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38C32Cu;
    {
        const bool branch_taken_0x38c32c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C32Cu;
        // 0x38c330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c32c) {
            ctx->pc = 0x38C364u;
            goto label_38c364;
        }
    }
    ctx->pc = 0x38C334u;
    // 0x38c334: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x38c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x38c338: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38C338u;
    {
        const bool branch_taken_0x38c338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C338u;
        // 0x38c33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c338) {
            ctx->pc = 0x38C364u;
            goto label_38c364;
        }
    }
    ctx->pc = 0x38C340u;
    // 0x38c340: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c344: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x38c344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38c348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C348u;
    {
        const bool branch_taken_0x38c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C348u;
        // 0x38c34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c348) {
            ctx->pc = 0x38C360u;
            goto label_38c360;
        }
    }
    ctx->pc = 0x38C350u;
    // 0x38c350: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38C350u;
    SET_GPR_U32(ctx, 31, 0x38C358u);
    ctx->pc = 0x38C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C350u;
    // 0x38c354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38C350u, 0x38C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C358u;
label_38c358:
    // 0x38c358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38C358u;
    {
        const bool branch_taken_0x38c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C358u;
        // 0x38c35c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c358) {
            ctx->pc = 0x38C368u;
            goto label_38c368;
        }
    }
    ctx->pc = 0x38C360u;
label_38c360:
    // 0x38c360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c364:
    // 0x38c364: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x38c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_38c368:
    // 0x38c368: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38c368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x38c36c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c370: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x38c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x38c374: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C374u;
    {
        const bool branch_taken_0x38c374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C374u;
        // 0x38c378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c374) {
            ctx->pc = 0x38C38Cu;
            goto label_38c38c;
        }
    }
    ctx->pc = 0x38C37Cu;
    // 0x38c37c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38C37Cu;
    SET_GPR_U32(ctx, 31, 0x38C384u);
    ctx->pc = 0x38C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C37Cu;
    // 0x38c380: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38C37Cu, 0x38C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C384u;
label_38c384:
    // 0x38c384: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x38c384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x38c388: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38c38c:
    // 0x38c38c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x38c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x38c390: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C390u;
    {
        const bool branch_taken_0x38c390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c390) {
            ctx->pc = 0x38C394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C390u;
            // 0x38c394: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C3B4u;
            goto label_38c3b4;
        }
    }
    ctx->pc = 0x38C398u;
    // 0x38c398: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x38c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38c39c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x38C39Cu;
    {
        const bool branch_taken_0x38c39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c39c) {
            ctx->pc = 0x38C3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C39Cu;
            // 0x38c3a0: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C424u;
            goto label_38c424;
        }
    }
    ctx->pc = 0x38C3A4u;
    // 0x38c3a4: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x38c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x38c3a8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x38C3A8u;
    {
        const bool branch_taken_0x38c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c3a8) {
            ctx->pc = 0x38C3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C3A8u;
            // 0x38c3ac: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C424u;
            goto label_38c424;
        }
    }
    ctx->pc = 0x38C3B0u;
    // 0x38c3b0: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x38c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_38c3b4:
    // 0x38c3b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38C3B4u;
    {
        const bool branch_taken_0x38c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3B4u;
        // 0x38c3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3b4) {
            ctx->pc = 0x38C3FCu;
            goto label_38c3fc;
        }
    }
    ctx->pc = 0x38C3BCu;
    // 0x38c3bc: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x38c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x38c3c0: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x38c3c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x38c3c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38c3cc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x38c3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x38c3d0: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x38c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x38c3d4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x38c3d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x38c3d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38c3dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x38c3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c3e0: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x38c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x38c3e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38c3e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c3e8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x38c3e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c3ec: 0xc0e2fe8  jal         func_38BFA0
    ctx->pc = 0x38C3ECu;
    SET_GPR_U32(ctx, 31, 0x38C3F4u);
    ctx->pc = 0x38C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C3ECu;
    // 0x38c3f0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BFA0u, 0x38C3ECu, 0x38C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C3F4u;
label_38c3f4:
    // 0x38c3f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38C3F4u;
    {
        const bool branch_taken_0x38c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C3F4u;
        // 0x38c3f8: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c3f4) {
            ctx->pc = 0x38C424u;
            goto label_38c424;
        }
    }
    ctx->pc = 0x38C3FCu;
label_38c3fc:
    // 0x38c3fc: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x38c3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x38c400: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x38c400u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x38c404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c408: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38c408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38c40c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x38c40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c410: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38c410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c414: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38c414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c418: 0xc0e2ede  jal         func_38BB78
    ctx->pc = 0x38C418u;
    SET_GPR_U32(ctx, 31, 0x38C420u);
    ctx->pc = 0x38C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C418u;
    // 0x38c41c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BB78u, 0x38C418u, 0x38C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C420u;
label_38c420:
    // 0x38c420: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x38c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_38c424:
    // 0x38c424: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x38C424u;
    {
        const bool branch_taken_0x38c424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C424u;
        // 0x38c428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c424) {
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C42Cu;
    // 0x38c42c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c430: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x38c434: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x38C434u;
    {
        const bool branch_taken_0x38c434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c434) {
            ctx->pc = 0x38C4B0u;
            goto label_38c4b0;
        }
    }
    ctx->pc = 0x38C43Cu;
    // 0x38c43c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x38c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x38c440: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38C440u;
    {
        const bool branch_taken_0x38c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C440u;
        // 0x38c444: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c440) {
            ctx->pc = 0x38C488u;
            goto label_38c488;
        }
    }
    ctx->pc = 0x38C448u;
    // 0x38c448: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x38c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x38c44c: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x38c44cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x38c450: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x38c450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38c458: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x38c458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x38c45c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x38c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x38c460: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x38c460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c464: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38c468: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x38c468u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x38c46c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x38c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x38c470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38c474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c478: 0xc0e2fe8  jal         func_38BFA0
    ctx->pc = 0x38C478u;
    SET_GPR_U32(ctx, 31, 0x38C480u);
    ctx->pc = 0x38C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C478u;
    // 0x38c47c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BFA0u, 0x38C478u, 0x38C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C480u;
label_38c480:
    // 0x38c480: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38C480u;
    {
        const bool branch_taken_0x38c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C480u;
        // 0x38c484: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c480) {
            ctx->pc = 0x38C4B0u;
            goto label_38c4b0;
        }
    }
    ctx->pc = 0x38C488u;
label_38c488:
    // 0x38c488: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x38c488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x38c48c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x38c48cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x38c490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c494: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38c494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38c498: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x38c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x38c49c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38c49cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c4a0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38c4a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c4a4: 0xc0e2ede  jal         func_38BB78
    ctx->pc = 0x38C4A4u;
    SET_GPR_U32(ctx, 31, 0x38C4ACu);
    ctx->pc = 0x38C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4A4u;
    // 0x38c4a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BB78u, 0x38C4A4u, 0x38C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4ACu;
label_38c4ac:
    // 0x38c4ac: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x38c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_38c4b0:
    // 0x38c4b0: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x38C4B0u;
    {
        const bool branch_taken_0x38c4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4B0u;
        // 0x38c4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4b0) {
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C4B8u;
    // 0x38c4b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c4bc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x38c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38c4c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C4C0u;
    {
        const bool branch_taken_0x38c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4C0u;
        // 0x38c4c4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4c0) {
            ctx->pc = 0x38C4E4u;
            goto label_38c4e4;
        }
    }
    ctx->pc = 0x38C4C8u;
    // 0x38c4c8: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x38c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x38c4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38C4CCu;
    {
        const bool branch_taken_0x38c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4CCu;
        // 0x38c4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4cc) {
            ctx->pc = 0x38C4E0u;
            goto label_38c4e0;
        }
    }
    ctx->pc = 0x38C4D4u;
    // 0x38c4d4: 0xc0e3350  jal         func_38CD40
    ctx->pc = 0x38C4D4u;
    SET_GPR_U32(ctx, 31, 0x38C4DCu);
    ctx->pc = 0x38C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4D4u;
    // 0x38c4d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD40u, 0x38C4D4u, 0x38C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4DCu;
label_38c4dc:
    // 0x38c4dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38c4e0:
    // 0x38c4e0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x38c4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_38c4e4:
    // 0x38c4e4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x38C4E4u;
    {
        const bool branch_taken_0x38c4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4E4u;
        // 0x38c4e8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c4e4) {
            ctx->pc = 0x38C588u;
            goto label_38c588;
        }
    }
    ctx->pc = 0x38C4ECu;
    // 0x38c4ec: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38c4f0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x38c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x38c4f4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x38c4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38c4f8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x38c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x38c4fc: 0xc0e378a  jal         func_38DE28
    ctx->pc = 0x38C4FCu;
    SET_GPR_U32(ctx, 31, 0x38C504u);
    ctx->pc = 0x38C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C4FCu;
    // 0x38c500: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE28u, 0x38C4FCu, 0x38C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C504u;
label_38c504:
    // 0x38c504: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38C504u;
    SET_GPR_U32(ctx, 31, 0x38C50Cu);
    ctx->pc = 0x38C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C504u;
    // 0x38c508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38C504u, 0x38C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C50Cu;
label_38c50c:
    // 0x38c50c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x38c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c510: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x38c510u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x38c514: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x38c514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x38c518: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38c518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38c51c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38c520: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x38c520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x38c524: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c528: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x38c528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x38c52c: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x38c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x38c530: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x38c530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x38c534: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38c538: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x38c538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x38c53c: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x38c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x38c540: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x38c540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38c544: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x38c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x38c548: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x38c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x38c54c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38c54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x38c550: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x38c550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x38c554: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x38c554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x38c558: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x38c558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38c55c: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x38C55Cu;
    {
        const bool branch_taken_0x38c55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x38C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C55Cu;
        // 0x38c560: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c55c) {
            ctx->pc = 0x38C578u;
            goto label_38c578;
        }
    }
    ctx->pc = 0x38C564u;
    // 0x38c564: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x38c564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x38c568: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C568u;
    {
        const bool branch_taken_0x38c568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x38C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C568u;
        // 0x38c56c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c568) {
            ctx->pc = 0x38C578u;
            goto label_38c578;
        }
    }
    ctx->pc = 0x38C570u;
    // 0x38c570: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C570u;
    {
        const bool branch_taken_0x38c570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C570u;
        // 0x38c574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c570) {
            ctx->pc = 0x38C580u;
            goto label_38c580;
        }
    }
    ctx->pc = 0x38C578u;
label_38c578:
    // 0x38c578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38C578u;
    {
        const bool branch_taken_0x38c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C578u;
        // 0x38c57c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c578) {
            ctx->pc = 0x38C59Cu;
            goto label_38c59c;
        }
    }
    ctx->pc = 0x38C580u;
label_38c580:
    // 0x38c580: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38C580u;
    {
        const bool branch_taken_0x38c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C580u;
        // 0x38c584: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c580) {
            ctx->pc = 0x38C59Cu;
            goto label_38c59c;
        }
    }
    ctx->pc = 0x38C588u;
label_38c588:
    // 0x38c588: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x38c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x38c58c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c590: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x38c590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38c594: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x38c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x38c598: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x38c598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_38c59c:
    // 0x38c59c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x38c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x38c5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C5A0u;
    {
        const bool branch_taken_0x38c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5A0u;
        // 0x38c5a4: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c5a0) {
            ctx->pc = 0x38C5B0u;
            goto label_38c5b0;
        }
    }
    ctx->pc = 0x38C5A8u;
    // 0x38c5a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x38C5A8u;
    {
        const bool branch_taken_0x38c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5A8u;
        // 0x38c5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c5a8) {
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C5B0u;
label_38c5b0:
    // 0x38c5b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c5b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38c5b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C5B8u;
    {
        const bool branch_taken_0x38c5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c5b8) {
            ctx->pc = 0x38C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C5B8u;
            // 0x38c5bc: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C5DCu;
            goto label_38c5dc;
        }
    }
    ctx->pc = 0x38C5C0u;
    // 0x38c5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c5c4: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x38c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x38c5c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c5cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38c5d0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x38C5D0u;
    {
        const bool branch_taken_0x38c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c5d0) {
            ctx->pc = 0x38C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C5D0u;
            // 0x38c5d4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C608u;
            goto label_38c608;
        }
    }
    ctx->pc = 0x38C5D8u;
    // 0x38c5d8: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x38c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_38c5dc:
    // 0x38c5dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x38C5DCu;
    {
        const bool branch_taken_0x38c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c5dc) {
            ctx->pc = 0x38C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C5DCu;
            // 0x38c5e0: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C608u;
            goto label_38c608;
        }
    }
    ctx->pc = 0x38C5E4u;
    // 0x38c5e4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x38c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x38c5e8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x38c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x38c5ec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x38c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x38c5f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x38c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x38c5f4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x38c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x38c5f8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x38c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x38c5fc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x38c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x38c600: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x38c600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x38c604: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x38c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_38c608:
    // 0x38c608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38c60c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x38C60Cu;
    {
        const bool branch_taken_0x38c60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C60Cu;
        // 0x38c610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c60c) {
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C614u;
    // 0x38c614: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c618: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x38c618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x38c61c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38C61Cu;
    {
        const bool branch_taken_0x38c61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C61Cu;
        // 0x38c620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c61c) {
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C624u;
    // 0x38c624: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x38c624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x38c628: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38c62c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x38c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x38c630: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x38c630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x38c634: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x38c634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x38c638: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x38c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x38c63c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C63Cu;
    {
        const bool branch_taken_0x38c63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C63Cu;
        // 0x38c640: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c63c) {
            ctx->pc = 0x38C64Cu;
            goto label_38c64c;
        }
    }
    ctx->pc = 0x38C644u;
    // 0x38c644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38C644u;
    {
        const bool branch_taken_0x38c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C644u;
        // 0x38c648: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c644) {
            ctx->pc = 0x38C664u;
            goto label_38c664;
        }
    }
    ctx->pc = 0x38C64Cu;
label_38c64c:
    // 0x38c64c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x38c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x38c650: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x38c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x38c654: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x38c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x38c658: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x38c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x38c65c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38c65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38c660: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38c660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_38c664:
    // 0x38c664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c668:
    // 0x38c668: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x38c668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38c66c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x38c66cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38c670: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x38c670u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38c674: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x38c674u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38c678: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x38c678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38c67c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x38c67cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38c680: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x38c680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c684: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x38c684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c688: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x38c688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c68c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x38c68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c690: 0x3e00008  jr          $ra
    ctx->pc = 0x38C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C690u;
        // 0x38c694: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C698u;
}
