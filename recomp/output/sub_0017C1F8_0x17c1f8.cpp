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

// Function: sub_0017C1F8
// Address: 0x17c1f8 - 0x17c5e0
void sub_0017C1F8_0x17c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C1F8_0x17c1f8");
#endif

    switch (ctx->pc) {
        case 0x17c244u: goto label_17c244;
        case 0x17c274u: goto label_17c274;
        case 0x17c2a4u: goto label_17c2a4;
        case 0x17c2d8u: goto label_17c2d8;
        case 0x17c374u: goto label_17c374;
        case 0x17c38cu: goto label_17c38c;
        case 0x17c39cu: goto label_17c39c;
        case 0x17c40cu: goto label_17c40c;
        case 0x17c42cu: goto label_17c42c;
        case 0x17c448u: goto label_17c448;
        case 0x17c478u: goto label_17c478;
        case 0x17c4a0u: goto label_17c4a0;
        case 0x17c4c4u: goto label_17c4c4;
        case 0x17c508u: goto label_17c508;
        case 0x17c558u: goto label_17c558;
        case 0x17c59cu: goto label_17c59c;
        case 0x17c5acu: goto label_17c5ac;
        default: break;
    }

    ctx->pc = 0x17c1f8u;

    // 0x17c1f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17c1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17c1fc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17c200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c204: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x17c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17c208: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x17c208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17c20c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17c210: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x17c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17c214: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17c214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c218: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x17c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17c21c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17c21cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c220: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x17c220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17c224: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17c224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c228: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x17c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17c22c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x17c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x17c230: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x17c230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x17c234: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x17c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x17c238: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x17c238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x17c23c: 0xc047866  jal         func_11E198
    ctx->pc = 0x17C23Cu;
    SET_GPR_U32(ctx, 31, 0x17C244u);
    ctx->pc = 0x17C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C23Cu;
    // 0x17c240: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x17C23Cu, 0x17C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C244u;
label_17c244:
    // 0x17c244: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c248: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x17c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17c24c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C24Cu;
    {
        const bool branch_taken_0x17c24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C24Cu;
        // 0x17c250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c24c) {
            ctx->pc = 0x17C25Cu;
            goto label_17c25c;
        }
    }
    ctx->pc = 0x17C254u;
    // 0x17c254: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C254u;
    {
        const bool branch_taken_0x17c254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c254) {
            ctx->pc = 0x17C278u;
            goto label_17c278;
        }
    }
    ctx->pc = 0x17C25Cu;
label_17c25c:
    // 0x17c25c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c260: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17c260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17c264: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17c268: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x17c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x17c26c: 0xc0466da  jal         func_119B68
    ctx->pc = 0x17C26Cu;
    SET_GPR_U32(ctx, 31, 0x17C274u);
    ctx->pc = 0x17C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C26Cu;
    // 0x17c270: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B68u, 0x17C26Cu, 0x17C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C274u;
label_17c274:
    // 0x17c274: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17c274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c278:
    // 0x17c278: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C278u;
    {
        const bool branch_taken_0x17c278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C278u;
        // 0x17c27c: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c278) {
            ctx->pc = 0x17C288u;
            goto label_17c288;
        }
    }
    ctx->pc = 0x17C280u;
    // 0x17c280: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x17C280u;
    {
        const bool branch_taken_0x17c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C280u;
        // 0x17c284: 0xae601008  sw          $zero, 0x1008($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c280) {
            ctx->pc = 0x17C5ACu;
            goto label_17c5ac;
        }
    }
    ctx->pc = 0x17C288u;
label_17c288:
    // 0x17c288: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c28c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x17c28cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c290: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17c290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17c294: 0x261087a0  addiu       $s0, $s0, -0x7860
    ctx->pc = 0x17c294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936480));
    // 0x17c298: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c29c: 0xc04685c  jal         func_11A170
    ctx->pc = 0x17C29Cu;
    SET_GPR_U32(ctx, 31, 0x17C2A4u);
    ctx->pc = 0x17C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C29Cu;
    // 0x17c2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A170u, 0x17C29Cu, 0x17C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2A4u;
label_17c2a4:
    // 0x17c2a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17c2a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2ac: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x17c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
    // 0x17c2b0: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x17c2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x17c2b4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17c2b8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x17c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x17c2bc: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x17c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x17c2c0: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x17c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x17c2c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17c2c8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c2cc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17c2d0: 0xc046850  jal         func_11A140
    ctx->pc = 0x17C2D0u;
    SET_GPR_U32(ctx, 31, 0x17C2D8u);
    ctx->pc = 0x17C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C2D0u;
    // 0x17c2d4: 0x27a90034  addiu       $t1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A140u, 0x17C2D0u, 0x17C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2D8u;
label_17c2d8:
    // 0x17c2d8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17c2dc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x17c2dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2e0: 0x2442a080  addiu       $v0, $v0, -0x5F80
    ctx->pc = 0x17c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x17c2e4: 0x8c430fd4  lw          $v1, 0xFD4($v0)
    ctx->pc = 0x17c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48B054u));
    // 0x17c2e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C2E8u;
    {
        const bool branch_taken_0x17c2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2E8u;
        // 0x17c2ec: 0x8c440fd0  lw          $a0, 0xFD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2e8) {
            ctx->pc = 0x17C304u;
            goto label_17c304;
        }
    }
    ctx->pc = 0x17C2F0u;
    // 0x17c2f0: 0x16630005  bne         $s3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C2F0u;
    {
        const bool branch_taken_0x17c2f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2F0u;
        // 0x17c2f4: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2f0) {
            ctx->pc = 0x17C308u;
            goto label_17c308;
        }
    }
    ctx->pc = 0x17C2F8u;
    // 0x17c2f8: 0xac520fd0  sw          $s2, 0xFD0($v0)
    ctx->pc = 0x17c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4048), GPR_U32(ctx, 18));
    // 0x17c2fc: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x17c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x17c300: 0xac400fd4  sw          $zero, 0xFD4($v0)
    ctx->pc = 0x17c300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4052), GPR_U32(ctx, 0));
label_17c304:
    // 0x17c304: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x17c304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_17c308:
    // 0x17c308: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c30c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C30Cu;
    {
        const bool branch_taken_0x17c30c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C30Cu;
        // 0x17c310: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c30c) {
            ctx->pc = 0x17C35Cu;
            goto label_17c35c;
        }
    }
    ctx->pc = 0x17C314u;
    // 0x17c314: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17c314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c318: 0x8c622270  lw          $v0, 0x2270($v1)
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8816)));
    // 0x17c31c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17c320: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c324: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c328: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c32c: 0xc2282a  slt         $a1, $a2, $v0
    ctx->pc = 0x17c32cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17c330: 0x8ce302a4  lw          $v1, 0x2A4($a3)
    ctx->pc = 0x17c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 676)));
    // 0x17c334: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x17c334u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x17c338: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x17c338u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17c33c: 0x44400a  movz        $t0, $v0, $a0
    ctx->pc = 0x17c33cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x17c340: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x17c340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17c344: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x17c344u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c348: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17c348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c34c: 0x66400b  movn        $t0, $v1, $a2
    ctx->pc = 0x17c34cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x17c350: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x17c350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17c354: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17C354u;
    {
        const bool branch_taken_0x17c354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c354) {
            ctx->pc = 0x17C358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C354u;
            // 0x17c358: 0xafa80024  sw          $t0, 0x24($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C35Cu;
            goto label_17c35c;
        }
    }
    ctx->pc = 0x17C35Cu;
label_17c35c:
    // 0x17c35c: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x17C35Cu;
    {
        const bool branch_taken_0x17c35c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C35Cu;
        // 0x17c360: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c35c) {
            ctx->pc = 0x17C3A4u;
            goto label_17c3a4;
        }
    }
    ctx->pc = 0x17C364u;
    // 0x17c364: 0x16a00092  bnez        $s5, . + 4 + (0x92 << 2)
    ctx->pc = 0x17C364u;
    {
        const bool branch_taken_0x17c364 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C364u;
        // 0x17c368: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c364) {
            ctx->pc = 0x17C5B0u;
            goto label_17c5b0;
        }
    }
    ctx->pc = 0x17C36Cu;
    // 0x17c36c: 0xc043a12  jal         func_10E848
    ctx->pc = 0x17C36Cu;
    SET_GPR_U32(ctx, 31, 0x17C374u);
    ctx->pc = 0x17C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C36Cu;
    // 0x17c370: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E848u, 0x17C36Cu, 0x17C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C374u;
label_17c374:
    // 0x17c374: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x17C374u;
    {
        const bool branch_taken_0x17c374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C374u;
        // 0x17c378: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c374) {
            ctx->pc = 0x17C5B0u;
            goto label_17c5b0;
        }
    }
    ctx->pc = 0x17C37Cu;
    // 0x17c37c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17c380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c384: 0xc04445e  jal         func_111178
    ctx->pc = 0x17C384u;
    SET_GPR_U32(ctx, 31, 0x17C38Cu);
    ctx->pc = 0x17C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C384u;
    // 0x17c388: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x17C384u, 0x17C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C38Cu;
label_17c38c:
    // 0x17c38c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x17c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c394: 0xc05f336  jal         func_17CCD8
    ctx->pc = 0x17C394u;
    SET_GPR_U32(ctx, 31, 0x17C39Cu);
    ctx->pc = 0x17C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C394u;
    // 0x17c398: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CCD8u, 0x17C394u, 0x17C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C39Cu;
label_17c39c:
    // 0x17c39c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x17C39Cu;
    {
        const bool branch_taken_0x17c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C39Cu;
        // 0x17c3a0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c39c) {
            ctx->pc = 0x17C5B0u;
            goto label_17c5b0;
        }
    }
    ctx->pc = 0x17C3A4u;
label_17c3a4:
    // 0x17c3a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c3a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c3ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17c3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c3b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c3b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17c3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17c3b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c3bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17c3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c3c0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x17c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c3c4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17c3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17c3c8: 0x8c7000b0  lw          $s0, 0xB0($v1)
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x17c3cc: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x17C3CCu;
    {
        const bool branch_taken_0x17c3cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3CCu;
        // 0x17c3d0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3cc) {
            ctx->pc = 0x17C5ACu;
            goto label_17c5ac;
        }
    }
    ctx->pc = 0x17C3D4u;
    // 0x17c3d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c3d8: 0x8c4307b8  lw          $v1, 0x7B8($v0)
    ctx->pc = 0x17c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x17c3dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17c3dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c3e4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x17C3E4u;
    {
        const bool branch_taken_0x17c3e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3E4u;
        // 0x17c3e8: 0xac4307b8  sw          $v1, 0x7B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3e4) {
            ctx->pc = 0x17C414u;
            goto label_17c414;
        }
    }
    ctx->pc = 0x17C3ECu;
    // 0x17c3ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c3f0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17c3f4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x17c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x17c3f8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x17c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x17c3fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17c3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c404: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x17C404u;
    SET_GPR_U32(ctx, 31, 0x17C40Cu);
    ctx->pc = 0x17C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C404u;
    // 0x17c408: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x17C404u, 0x17C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C40Cu;
label_17c40c:
    // 0x17c40c: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x17C40Cu;
    {
        const bool branch_taken_0x17c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c40c) {
            ctx->pc = 0x17C410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C40Cu;
            // 0x17c410: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C5B0u;
            goto label_17c5b0;
        }
    }
    ctx->pc = 0x17C414u;
label_17c414:
    // 0x17c414: 0x26e2a080  addiu       $v0, $s7, -0x5F80
    ctx->pc = 0x17c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942848));
    // 0x17c418: 0x8c430fc0  lw          $v1, 0xFC0($v0)
    ctx->pc = 0x17c418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4032)));
    // 0x17c41c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C41Cu;
    {
        const bool branch_taken_0x17c41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C41Cu;
        // 0x17c420: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c41c) {
            ctx->pc = 0x17C434u;
            goto label_17c434;
        }
    }
    ctx->pc = 0x17C424u;
    // 0x17c424: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x17C424u;
    SET_GPR_U32(ctx, 31, 0x17C42Cu);
    ctx->pc = 0x17C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C424u;
    // 0x17c428: 0x26c49a08  addiu       $a0, $s6, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x17C424u, 0x17C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C42Cu;
label_17c42c:
    // 0x17c42c: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x17C42Cu;
    {
        const bool branch_taken_0x17c42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c42c) {
            ctx->pc = 0x17C430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C42Cu;
            // 0x17c430: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C5B0u;
            goto label_17c5b0;
        }
    }
    ctx->pc = 0x17C434u;
label_17c434:
    // 0x17c434: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17c434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17c438: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x17c438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c43c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x17c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x17c440: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x17C440u;
    SET_GPR_U32(ctx, 31, 0x17C448u);
    ctx->pc = 0x17C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C440u;
    // 0x17c444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x17C440u, 0x17C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C448u;
label_17c448:
    // 0x17c448: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x17C448u;
    {
        const bool branch_taken_0x17c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C448u;
        // 0x17c44c: 0x27c287a0  addiu       $v0, $fp, -0x7860 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c448) {
            ctx->pc = 0x17C5ACu;
            goto label_17c5ac;
        }
    }
    ctx->pc = 0x17C450u;
    // 0x17c450: 0x16a00052  bnez        $s5, . + 4 + (0x52 << 2)
    ctx->pc = 0x17C450u;
    {
        const bool branch_taken_0x17c450 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C450u;
        // 0x17c454: 0x8c52123c  lw          $s2, 0x123C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c450) {
            ctx->pc = 0x17C59Cu;
            goto label_17c59c;
        }
    }
    ctx->pc = 0x17C458u;
    // 0x17c458: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x17C458u;
    {
        const bool branch_taken_0x17c458 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C458u;
        // 0x17c45c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c458) {
            ctx->pc = 0x17C488u;
            goto label_17c488;
        }
    }
    ctx->pc = 0x17C460u;
    // 0x17c460: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x17c460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c46c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17c46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c470: 0xc05f2b8  jal         func_17CAE0
    ctx->pc = 0x17C470u;
    SET_GPR_U32(ctx, 31, 0x17C478u);
    ctx->pc = 0x17C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C470u;
    // 0x17c474: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CAE0u, 0x17C470u, 0x17C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C478u;
label_17c478:
    // 0x17c478: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x17c478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c47c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x17c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17c480: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17C480u;
    {
        const bool branch_taken_0x17c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C480u;
        // 0x17c484: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c480) {
            ctx->pc = 0x17C4A8u;
            goto label_17c4a8;
        }
    }
    ctx->pc = 0x17C488u;
label_17c488:
    // 0x17c488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c48c: 0x26c39a08  addiu       $v1, $s6, -0x65F8
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
    // 0x17c490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c498: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x17C498u;
    SET_GPR_U32(ctx, 31, 0x17C4A0u);
    ctx->pc = 0x17C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C498u;
    // 0x17c49c: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x17C498u, 0x17C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4A0u;
label_17c4a0:
    // 0x17c4a0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x17c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x17c4a4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x17c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_17c4a8:
    // 0x17c4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4ac: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x17c4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c4b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x17c4b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4b4: 0x8fa90034  lw          $t1, 0x34($sp)
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x17c4b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17c4b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4bc: 0xc05f39e  jal         func_17CE78
    ctx->pc = 0x17C4BCu;
    SET_GPR_U32(ctx, 31, 0x17C4C4u);
    ctx->pc = 0x17C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4BCu;
    // 0x17c4c0: 0x8faa0028  lw          $t2, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE78u, 0x17C4BCu, 0x17C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4C4u;
label_17c4c4:
    // 0x17c4c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c4c8: 0x26c39a08  addiu       $v1, $s6, -0x65F8
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
    // 0x17c4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c4d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c4d4: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x17c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17c4d8: 0x16a00030  bnez        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x17C4D8u;
    {
        const bool branch_taken_0x17c4d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4D8u;
        // 0x17c4dc: 0xae641008  sw          $a0, 0x1008($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4d8) {
            ctx->pc = 0x17C59Cu;
            goto label_17c59c;
        }
    }
    ctx->pc = 0x17C4E0u;
    // 0x17c4e0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x17c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x17c4e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c4e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C4E8u;
    {
        const bool branch_taken_0x17c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4E8u;
        // 0x17c4ec: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4e8) {
            ctx->pc = 0x17C510u;
            goto label_17c510;
        }
    }
    ctx->pc = 0x17C4F0u;
    // 0x17c4f0: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C4F0u;
    {
        const bool branch_taken_0x17c4f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4F0u;
        // 0x17c4f4: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4f0) {
            ctx->pc = 0x17C514u;
            goto label_17c514;
        }
    }
    ctx->pc = 0x17C4F8u;
    // 0x17c4f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c4fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17c4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c500: 0xc04445e  jal         func_111178
    ctx->pc = 0x17C500u;
    SET_GPR_U32(ctx, 31, 0x17C508u);
    ctx->pc = 0x17C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C500u;
    // 0x17c504: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x17C500u, 0x17C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C508u;
label_17c508:
    // 0x17c508: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17C508u;
    {
        const bool branch_taken_0x17c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C508u;
        // 0x17c50c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c508) {
            ctx->pc = 0x17C5A0u;
            goto label_17c5a0;
        }
    }
    ctx->pc = 0x17C510u;
label_17c510:
    // 0x17c510: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x17c510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_17c514:
    // 0x17c514: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17C514u;
    {
        const bool branch_taken_0x17c514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C514u;
        // 0x17c518: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c514) {
            ctx->pc = 0x17C5A0u;
            goto label_17c5a0;
        }
    }
    ctx->pc = 0x17C51Cu;
    // 0x17c51c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c520: 0x26c39a08  addiu       $v1, $s6, -0x65F8
    ctx->pc = 0x17c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
    // 0x17c524: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17c528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c52c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c530: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17c534: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C534u;
    {
        const bool branch_taken_0x17c534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c534) {
            ctx->pc = 0x17C538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C534u;
            // 0x17c538: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C544u;
            goto label_17c544;
        }
    }
    ctx->pc = 0x17C53Cu;
    // 0x17c53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17C53Cu;
    {
        const bool branch_taken_0x17c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C53Cu;
        // 0x17c540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c53c) {
            ctx->pc = 0x17C54Cu;
            goto label_17c54c;
        }
    }
    ctx->pc = 0x17C544u;
label_17c544:
    // 0x17c544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c548: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x17c548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17c54c:
    // 0x17c54c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c550: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17C550u;
    SET_GPR_U32(ctx, 31, 0x17C558u);
    ctx->pc = 0x17C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C550u;
    // 0x17c554: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17C550u, 0x17C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C558u;
label_17c558:
    // 0x17c558: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x17c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c55c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x17c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c560: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x17c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17c564: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x17c564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17c568: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17c568u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17c56c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17c56cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17c570: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17c570u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17c574: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x17c574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x17c578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c57c: 0x0  nop
    ctx->pc = 0x17c57cu;
    // NOP
    // 0x17c580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c584: 0x0  nop
    ctx->pc = 0x17c584u;
    // NOP
    // 0x17c588: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17C588u;
    {
        const bool branch_taken_0x17c588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C588u;
        // 0x17c58c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c588) {
            ctx->pc = 0x17C59Cu;
            goto label_17c59c;
        }
    }
    ctx->pc = 0x17C590u;
    // 0x17c590: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c594: 0xc04445e  jal         func_111178
    ctx->pc = 0x17C594u;
    SET_GPR_U32(ctx, 31, 0x17C59Cu);
    ctx->pc = 0x17C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C594u;
    // 0x17c598: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x17C594u, 0x17C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C59Cu;
label_17c59c:
    // 0x17c59c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_17c5a0:
    // 0x17c5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c5a4: 0xc05f3e6  jal         func_17CF98
    ctx->pc = 0x17C5A4u;
    SET_GPR_U32(ctx, 31, 0x17C5ACu);
    ctx->pc = 0x17C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5A4u;
    // 0x17c5a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF98u, 0x17C5A4u, 0x17C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5ACu;
label_17c5ac:
    // 0x17c5ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17c5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17c5b0:
    // 0x17c5b0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x17c5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17c5b4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x17c5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c5b8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17c5b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17c5bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x17c5bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17c5c0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x17c5c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17c5c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x17c5c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17c5c8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x17c5c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17c5cc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x17c5ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17c5d0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x17c5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17c5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5D4u;
        // 0x17c5d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C5DCu;
    // 0x17c5dc: 0x0  nop
    ctx->pc = 0x17c5dcu;
    // NOP
    ctx->pc = 0x17c5e0u;
}
