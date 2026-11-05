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

// Function: sub_002D3898
// Address: 0x2d3898 - 0x2d3ac8
void sub_002D3898_0x2d3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3898_0x2d3898");
#endif

    switch (ctx->pc) {
        case 0x2d3898u: goto label_2d3898;
        case 0x2d389cu: goto label_2d389c;
        case 0x2d38a0u: goto label_2d38a0;
        case 0x2d38a4u: goto label_2d38a4;
        case 0x2d38a8u: goto label_2d38a8;
        case 0x2d38acu: goto label_2d38ac;
        case 0x2d38b0u: goto label_2d38b0;
        case 0x2d38b4u: goto label_2d38b4;
        case 0x2d38b8u: goto label_2d38b8;
        case 0x2d38bcu: goto label_2d38bc;
        case 0x2d38c0u: goto label_2d38c0;
        case 0x2d38c4u: goto label_2d38c4;
        case 0x2d38c8u: goto label_2d38c8;
        case 0x2d38ccu: goto label_2d38cc;
        case 0x2d38d0u: goto label_2d38d0;
        case 0x2d38d4u: goto label_2d38d4;
        case 0x2d38d8u: goto label_2d38d8;
        case 0x2d38dcu: goto label_2d38dc;
        case 0x2d38e0u: goto label_2d38e0;
        case 0x2d38e4u: goto label_2d38e4;
        case 0x2d38e8u: goto label_2d38e8;
        case 0x2d38ecu: goto label_2d38ec;
        case 0x2d38f0u: goto label_2d38f0;
        case 0x2d38f4u: goto label_2d38f4;
        case 0x2d38f8u: goto label_2d38f8;
        case 0x2d38fcu: goto label_2d38fc;
        case 0x2d3900u: goto label_2d3900;
        case 0x2d3904u: goto label_2d3904;
        case 0x2d3908u: goto label_2d3908;
        case 0x2d390cu: goto label_2d390c;
        case 0x2d3910u: goto label_2d3910;
        case 0x2d3914u: goto label_2d3914;
        case 0x2d3918u: goto label_2d3918;
        case 0x2d391cu: goto label_2d391c;
        case 0x2d3920u: goto label_2d3920;
        case 0x2d3924u: goto label_2d3924;
        case 0x2d3928u: goto label_2d3928;
        case 0x2d392cu: goto label_2d392c;
        case 0x2d3930u: goto label_2d3930;
        case 0x2d3934u: goto label_2d3934;
        case 0x2d3938u: goto label_2d3938;
        case 0x2d393cu: goto label_2d393c;
        case 0x2d3940u: goto label_2d3940;
        case 0x2d3944u: goto label_2d3944;
        case 0x2d3948u: goto label_2d3948;
        case 0x2d394cu: goto label_2d394c;
        case 0x2d3950u: goto label_2d3950;
        case 0x2d3954u: goto label_2d3954;
        case 0x2d3958u: goto label_2d3958;
        case 0x2d395cu: goto label_2d395c;
        case 0x2d3960u: goto label_2d3960;
        case 0x2d3964u: goto label_2d3964;
        case 0x2d3968u: goto label_2d3968;
        case 0x2d396cu: goto label_2d396c;
        case 0x2d3970u: goto label_2d3970;
        case 0x2d3974u: goto label_2d3974;
        case 0x2d3978u: goto label_2d3978;
        case 0x2d397cu: goto label_2d397c;
        case 0x2d3980u: goto label_2d3980;
        case 0x2d3984u: goto label_2d3984;
        case 0x2d3988u: goto label_2d3988;
        case 0x2d398cu: goto label_2d398c;
        case 0x2d3990u: goto label_2d3990;
        case 0x2d3994u: goto label_2d3994;
        case 0x2d3998u: goto label_2d3998;
        case 0x2d399cu: goto label_2d399c;
        case 0x2d39a0u: goto label_2d39a0;
        case 0x2d39a4u: goto label_2d39a4;
        case 0x2d39a8u: goto label_2d39a8;
        case 0x2d39acu: goto label_2d39ac;
        case 0x2d39b0u: goto label_2d39b0;
        case 0x2d39b4u: goto label_2d39b4;
        case 0x2d39b8u: goto label_2d39b8;
        case 0x2d39bcu: goto label_2d39bc;
        case 0x2d39c0u: goto label_2d39c0;
        case 0x2d39c4u: goto label_2d39c4;
        case 0x2d39c8u: goto label_2d39c8;
        case 0x2d39ccu: goto label_2d39cc;
        case 0x2d39d0u: goto label_2d39d0;
        case 0x2d39d4u: goto label_2d39d4;
        case 0x2d39d8u: goto label_2d39d8;
        case 0x2d39dcu: goto label_2d39dc;
        case 0x2d39e0u: goto label_2d39e0;
        case 0x2d39e4u: goto label_2d39e4;
        case 0x2d39e8u: goto label_2d39e8;
        case 0x2d39ecu: goto label_2d39ec;
        case 0x2d39f0u: goto label_2d39f0;
        case 0x2d39f4u: goto label_2d39f4;
        case 0x2d39f8u: goto label_2d39f8;
        case 0x2d39fcu: goto label_2d39fc;
        case 0x2d3a00u: goto label_2d3a00;
        case 0x2d3a04u: goto label_2d3a04;
        case 0x2d3a08u: goto label_2d3a08;
        case 0x2d3a0cu: goto label_2d3a0c;
        case 0x2d3a10u: goto label_2d3a10;
        case 0x2d3a14u: goto label_2d3a14;
        case 0x2d3a18u: goto label_2d3a18;
        case 0x2d3a1cu: goto label_2d3a1c;
        case 0x2d3a20u: goto label_2d3a20;
        case 0x2d3a24u: goto label_2d3a24;
        case 0x2d3a28u: goto label_2d3a28;
        case 0x2d3a2cu: goto label_2d3a2c;
        case 0x2d3a30u: goto label_2d3a30;
        case 0x2d3a34u: goto label_2d3a34;
        case 0x2d3a38u: goto label_2d3a38;
        case 0x2d3a3cu: goto label_2d3a3c;
        case 0x2d3a40u: goto label_2d3a40;
        case 0x2d3a44u: goto label_2d3a44;
        case 0x2d3a48u: goto label_2d3a48;
        case 0x2d3a4cu: goto label_2d3a4c;
        case 0x2d3a50u: goto label_2d3a50;
        case 0x2d3a54u: goto label_2d3a54;
        case 0x2d3a58u: goto label_2d3a58;
        case 0x2d3a5cu: goto label_2d3a5c;
        case 0x2d3a60u: goto label_2d3a60;
        case 0x2d3a64u: goto label_2d3a64;
        case 0x2d3a68u: goto label_2d3a68;
        case 0x2d3a6cu: goto label_2d3a6c;
        case 0x2d3a70u: goto label_2d3a70;
        case 0x2d3a74u: goto label_2d3a74;
        case 0x2d3a78u: goto label_2d3a78;
        case 0x2d3a7cu: goto label_2d3a7c;
        case 0x2d3a80u: goto label_2d3a80;
        case 0x2d3a84u: goto label_2d3a84;
        case 0x2d3a88u: goto label_2d3a88;
        case 0x2d3a8cu: goto label_2d3a8c;
        case 0x2d3a90u: goto label_2d3a90;
        case 0x2d3a94u: goto label_2d3a94;
        case 0x2d3a98u: goto label_2d3a98;
        case 0x2d3a9cu: goto label_2d3a9c;
        case 0x2d3aa0u: goto label_2d3aa0;
        case 0x2d3aa4u: goto label_2d3aa4;
        case 0x2d3aa8u: goto label_2d3aa8;
        case 0x2d3aacu: goto label_2d3aac;
        case 0x2d3ab0u: goto label_2d3ab0;
        case 0x2d3ab4u: goto label_2d3ab4;
        case 0x2d3ab8u: goto label_2d3ab8;
        case 0x2d3abcu: goto label_2d3abc;
        case 0x2d3ac0u: goto label_2d3ac0;
        case 0x2d3ac4u: goto label_2d3ac4;
        default: break;
    }

    ctx->pc = 0x2d3898u;

label_2d3898:
    // 0x2d3898: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d3898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d389c:
    // 0x2d389c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2d38a0:
    // 0x2d38a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2d38a4:
    // 0x2d38a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d38a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d38a8:
    // 0x2d38a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d38a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2d38ac:
    // 0x2d38ac: 0x26140064  addiu       $s4, $s0, 0x64
    ctx->pc = 0x2d38acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2d38b0:
    // 0x2d38b0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d38b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2d38b4:
    // 0x2d38b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d38b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d38b8:
    // 0x2d38b8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d38b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2d38bc:
    // 0x2d38bc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2d38bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d38c0:
    // 0x2d38c0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d38c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2d38c4:
    // 0x2d38c4: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x2d38c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2d38c8:
    // 0x2d38c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2d38cc:
    // 0x2d38cc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2d38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2d38d0:
    // 0x2d38d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d38d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d38d4:
    // 0x2d38d4: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
label_2d38d8:
    if (ctx->pc == 0x2D38D8u) {
        ctx->pc = 0x2D38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38D4u;
        // 0x2d38d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D38DCu;
        goto label_2d38dc;
    }
    ctx->pc = 0x2D38D4u;
    {
        const bool branch_taken_0x2d38d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d38d4) {
            ctx->pc = 0x2D38D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D38D4u;
            // 0x2d38d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3980u;
            goto label_2d3980;
        }
    }
    ctx->pc = 0x2D38DCu;
label_2d38dc:
    // 0x2d38dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d38dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2d38e0:
    // 0x2d38e0: 0x2441818  mult        $v1, $s2, $a0
    ctx->pc = 0x2d38e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d38e4:
    // 0x2d38e4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2d38e8:
    // 0x2d38e8: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x2d38e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_2d38ec:
    // 0x2d38ec: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2d38f0:
    if (ctx->pc == 0x2D38F0u) {
        ctx->pc = 0x2D38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38ECu;
        // 0x2d38f0: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D38F4u;
        goto label_2d38f4;
    }
    ctx->pc = 0x2D38ECu;
    {
        const bool branch_taken_0x2d38ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38ECu;
        // 0x2d38f0: 0x2441018  mult        $v0, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38ec) {
            ctx->pc = 0x2D397Cu;
            goto label_2d397c;
        }
    }
    ctx->pc = 0x2D38F4u;
label_2d38f4:
    // 0x2d38f4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2d38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2d38f8:
    // 0x2d38f8: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x2d38f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d38fc:
    // 0x2d38fc: 0xc0b4d40  jal         func_2D3500
label_2d3900:
    if (ctx->pc == 0x2D3900u) {
        ctx->pc = 0x2D3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38FCu;
        // 0x2d3900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3904u;
        goto label_2d3904;
    }
    ctx->pc = 0x2D38FCu;
    SET_GPR_U32(ctx, 31, 0x2D3904u);
    ctx->pc = 0x2D3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D38FCu;
    // 0x2d3900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x2D38FCu, 0x2D3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3904u;
label_2d3904:
    // 0x2d3904: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_2d3908:
    if (ctx->pc == 0x2D3908u) {
        ctx->pc = 0x2D3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3904u;
        // 0x2d3908: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D390Cu;
        goto label_2d390c;
    }
    ctx->pc = 0x2D3904u;
    {
        const bool branch_taken_0x2d3904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3904) {
            ctx->pc = 0x2D3908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3904u;
            // 0x2d3908: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3980u;
            goto label_2d3980;
        }
    }
    ctx->pc = 0x2D390Cu;
label_2d390c:
    // 0x2d390c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x2d390cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2d3910:
    // 0x2d3910: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
label_2d3914:
    if (ctx->pc == 0x2D3914u) {
        ctx->pc = 0x2D3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3910u;
        // 0x2d3914: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3918u;
        goto label_2d3918;
    }
    ctx->pc = 0x2D3910u;
    {
        const bool branch_taken_0x2d3910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3910) {
            ctx->pc = 0x2D3914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3910u;
            // 0x2d3914: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3964u;
            goto label_2d3964;
        }
    }
    ctx->pc = 0x2D3918u;
label_2d3918:
    // 0x2d3918: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2d3918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2d391c:
    // 0x2d391c: 0x2cc40011  sltiu       $a0, $a2, 0x11
    ctx->pc = 0x2d391cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2d3920:
    // 0x2d3920: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2d3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2d3924:
    // 0x2d3924: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2d3924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2d3928:
    // 0x2d3928: 0x753821  addu        $a3, $v1, $s5
    ctx->pc = 0x2d3928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2d392c:
    // 0x2d392c: 0xae05006c  sw          $a1, 0x6C($s0)
    ctx->pc = 0x2d392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
label_2d3930:
    // 0x2d3930: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2d3934:
    if (ctx->pc == 0x2D3934u) {
        ctx->pc = 0x2D3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3930u;
        // 0x2d3934: 0xae070078  sw          $a3, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3938u;
        goto label_2d3938;
    }
    ctx->pc = 0x2D3930u;
    {
        const bool branch_taken_0x2d3930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3930u;
        // 0x2d3934: 0xae070078  sw          $a3, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3930) {
            ctx->pc = 0x2D3954u;
            goto label_2d3954;
        }
    }
    ctx->pc = 0x2D3938u;
label_2d3938:
    // 0x2d3938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d393c:
    // 0x2d393c: 0xc0b4d14  jal         func_2D3450
label_2d3940:
    if (ctx->pc == 0x2D3940u) {
        ctx->pc = 0x2D3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D393Cu;
        // 0x2d3940: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3944u;
        goto label_2d3944;
    }
    ctx->pc = 0x2D393Cu;
    SET_GPR_U32(ctx, 31, 0x2D3944u);
    ctx->pc = 0x2D3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D393Cu;
    // 0x2d3940: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x2D393Cu, 0x2D3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3944u;
label_2d3944:
    // 0x2d3944: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2d3944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2d3948:
    // 0x2d3948: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2d3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_2d394c:
    // 0x2d394c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2d3950:
    if (ctx->pc == 0x2D3950u) {
        ctx->pc = 0x2D3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D394Cu;
        // 0x2d3950: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3954u;
        goto label_2d3954;
    }
    ctx->pc = 0x2D394Cu;
    {
        const bool branch_taken_0x2d394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D394Cu;
        // 0x2d3950: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d394c) {
            ctx->pc = 0x2D397Cu;
            goto label_2d397c;
        }
    }
    ctx->pc = 0x2D3954u;
label_2d3954:
    // 0x2d3954: 0xc0b4d14  jal         func_2D3450
label_2d3958:
    if (ctx->pc == 0x2D3958u) {
        ctx->pc = 0x2D3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3954u;
        // 0x2d3958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D395Cu;
        goto label_2d395c;
    }
    ctx->pc = 0x2D3954u;
    SET_GPR_U32(ctx, 31, 0x2D395Cu);
    ctx->pc = 0x2D3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3954u;
    // 0x2d3958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x2D3954u, 0x2D395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D395Cu;
label_2d395c:
    // 0x2d395c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2d3960:
    if (ctx->pc == 0x2D3960u) {
        ctx->pc = 0x2D3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D395Cu;
        // 0x2d3960: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3964u;
        goto label_2d3964;
    }
    ctx->pc = 0x2D395Cu;
    {
        const bool branch_taken_0x2d395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D395Cu;
        // 0x2d3960: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d395c) {
            ctx->pc = 0x2D397Cu;
            goto label_2d397c;
        }
    }
    ctx->pc = 0x2D3964u;
label_2d3964:
    // 0x2d3964: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2d3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2d3968:
    // 0x2d3968: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2d3968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2d396c:
    // 0x2d396c: 0x40f809  jalr        $v0
label_2d3970:
    if (ctx->pc == 0x2D3970u) {
        ctx->pc = 0x2D3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D396Cu;
        // 0x2d3970: 0x8e060074  lw          $a2, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3974u;
        goto label_2d3974;
    }
    ctx->pc = 0x2D396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3974u);
        ctx->pc = 0x2D3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D396Cu;
        // 0x2d3970: 0x8e060074  lw          $a2, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D396Cu, 0x2D3974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3974u;
label_2d3974:
    // 0x2d3974: 0xc0b4d3e  jal         func_2D34F8
label_2d3978:
    if (ctx->pc == 0x2D3978u) {
        ctx->pc = 0x2D3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3974u;
        // 0x2d3978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D397Cu;
        goto label_2d397c;
    }
    ctx->pc = 0x2D3974u;
    SET_GPR_U32(ctx, 31, 0x2D397Cu);
    ctx->pc = 0x2D3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3974u;
    // 0x2d3978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D34F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D34F8u, 0x2D3974u, 0x2D397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D397Cu;
label_2d397c:
    // 0x2d397c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d397cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d3980:
    // 0x2d3980: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2d3980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2d3984:
    // 0x2d3984: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_2d3988:
    if (ctx->pc == 0x2D3988u) {
        ctx->pc = 0x2D3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3984u;
        // 0x2d3988: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D398Cu;
        goto label_2d398c;
    }
    ctx->pc = 0x2D3984u;
    {
        const bool branch_taken_0x2d3984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3984u;
        // 0x2d3988: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3984) {
            ctx->pc = 0x2D38D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d38d0;
        }
    }
    ctx->pc = 0x2D398Cu;
label_2d398c:
    // 0x2d398c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d398cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d3990:
    // 0x2d3990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3994:
    // 0x2d3994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3998:
    // 0x2d3998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d399c:
    // 0x2d399c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2d399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2d39a0:
    // 0x2d39a0: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x2d39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2d39a4:
    // 0x2d39a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d39a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d39a8:
    // 0x2d39a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2d39ac:
    if (ctx->pc == 0x2D39ACu) {
        ctx->pc = 0x2D39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39A8u;
        // 0x2d39ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D39B0u;
        goto label_2d39b0;
    }
    ctx->pc = 0x2D39A8u;
    {
        const bool branch_taken_0x2d39a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39A8u;
        // 0x2d39ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39a8) {
            ctx->pc = 0x2D39B8u;
            goto label_2d39b8;
        }
    }
    ctx->pc = 0x2D39B0u;
label_2d39b0:
    // 0x2d39b0: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2d39b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_2d39b4:
    // 0x2d39b4: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x2d39b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_2d39b8:
    // 0x2d39b8: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2d39b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2d39bc:
    // 0x2d39bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2d39c0:
    if (ctx->pc == 0x2D39C0u) {
        ctx->pc = 0x2D39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39BCu;
        // 0x2d39c0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D39C4u;
        goto label_2d39c4;
    }
    ctx->pc = 0x2D39BCu;
    {
        const bool branch_taken_0x2d39bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39BCu;
        // 0x2d39c0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39bc) {
            ctx->pc = 0x2D39A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d39a0;
        }
    }
    ctx->pc = 0x2D39C4u;
label_2d39c4:
    // 0x2d39c4: 0x54a00038  bnel        $a1, $zero, . + 4 + (0x38 << 2)
label_2d39c8:
    if (ctx->pc == 0x2D39C8u) {
        ctx->pc = 0x2D39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39C4u;
        // 0x2d39c8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D39CCu;
        goto label_2d39cc;
    }
    ctx->pc = 0x2D39C4u;
    {
        const bool branch_taken_0x2d39c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d39c4) {
            ctx->pc = 0x2D39C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D39C4u;
            // 0x2d39c8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3AA8u;
            goto label_2d3aa8;
        }
    }
    ctx->pc = 0x2D39CCu;
label_2d39cc:
    // 0x2d39cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d39ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d39d0:
    // 0x2d39d0: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x2d39d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2d39d4:
    // 0x2d39d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d39d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d39d8:
    // 0x2d39d8: 0xc0fb5ac  jal         func_3ED6B0
label_2d39dc:
    if (ctx->pc == 0x2D39DCu) {
        ctx->pc = 0x2D39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39D8u;
        // 0x2d39dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D39E0u;
        goto label_2d39e0;
    }
    ctx->pc = 0x2D39D8u;
    SET_GPR_U32(ctx, 31, 0x2D39E0u);
    ctx->pc = 0x2D39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D39D8u;
    // 0x2d39dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED6B0u, 0x2D39D8u, 0x2D39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39E0u;
label_2d39e0:
    // 0x2d39e0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2d39e4:
    if (ctx->pc == 0x2D39E4u) {
        ctx->pc = 0x2D39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39E0u;
        // 0x2d39e4: 0x93a2001d  lbu         $v0, 0x1D($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D39E8u;
        goto label_2d39e8;
    }
    ctx->pc = 0x2D39E0u;
    {
        const bool branch_taken_0x2d39e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39E0u;
        // 0x2d39e4: 0x93a2001d  lbu         $v0, 0x1D($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39e0) {
            ctx->pc = 0x2D3AA4u;
            goto label_2d3aa4;
        }
    }
    ctx->pc = 0x2D39E8u;
label_2d39e8:
    // 0x2d39e8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_2d39ec:
    if (ctx->pc == 0x2D39ECu) {
        ctx->pc = 0x2D39F0u;
        goto label_2d39f0;
    }
    ctx->pc = 0x2D39E8u;
    {
        const bool branch_taken_0x2d39e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d39e8) {
            ctx->pc = 0x2D3A9Cu;
            goto label_2d3a9c;
        }
    }
    ctx->pc = 0x2D39F0u;
label_2d39f0:
    // 0x2d39f0: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2d39f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2d39f4:
    // 0x2d39f4: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2d39f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2d39f8:
    // 0x2d39f8: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x2d39f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2d39fc:
    // 0x2d39fc: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x2d39fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2d3a00:
    // 0x2d3a00: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2d3a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d3a04:
    // 0x2d3a04: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2d3a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d3a08:
    // 0x2d3a08: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x2d3a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2d3a0c:
    // 0x2d3a0c: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x2d3a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2d3a10:
    // 0x2d3a10: 0xb204006f  sdl         $a0, 0x6F($s0)
    ctx->pc = 0x2d3a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a14:
    // 0x2d3a14: 0xb6040068  sdr         $a0, 0x68($s0)
    ctx->pc = 0x2d3a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a18:
    // 0x2d3a18: 0xb2050077  sdl         $a1, 0x77($s0)
    ctx->pc = 0x2d3a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a1c:
    // 0x2d3a1c: 0xb6050070  sdr         $a1, 0x70($s0)
    ctx->pc = 0x2d3a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a20:
    // 0x2d3a20: 0xb202007f  sdl         $v0, 0x7F($s0)
    ctx->pc = 0x2d3a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a24:
    // 0x2d3a24: 0xb6020078  sdr         $v0, 0x78($s0)
    ctx->pc = 0x2d3a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a28:
    // 0x2d3a28: 0xb2030087  sdl         $v1, 0x87($s0)
    ctx->pc = 0x2d3a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a2c:
    // 0x2d3a2c: 0xb6030080  sdr         $v1, 0x80($s0)
    ctx->pc = 0x2d3a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d3a30:
    // 0x2d3a30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3a34:
    // 0x2d3a34: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x2d3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
label_2d3a38:
    // 0x2d3a38: 0xc076100  jal         func_1D8400
label_2d3a3c:
    if (ctx->pc == 0x2D3A3Cu) {
        ctx->pc = 0x2D3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A38u;
        // 0x2d3a3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3A40u;
        goto label_2d3a40;
    }
    ctx->pc = 0x2D3A38u;
    SET_GPR_U32(ctx, 31, 0x2D3A40u);
    ctx->pc = 0x2D3A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A38u;
    // 0x2d3a3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2D3A38u, 0x2D3A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A40u;
label_2d3a40:
    // 0x2d3a40: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2d3a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d3a44:
    // 0x2d3a44: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2d3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_2d3a48:
    // 0x2d3a48: 0x2cc20011  sltiu       $v0, $a2, 0x11
    ctx->pc = 0x2d3a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2d3a4c:
    // 0x2d3a4c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2d3a50:
    if (ctx->pc == 0x2D3A50u) {
        ctx->pc = 0x2D3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A4Cu;
        // 0x2d3a50: 0x93a4001c  lbu         $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3A54u;
        goto label_2d3a54;
    }
    ctx->pc = 0x2D3A4Cu;
    {
        const bool branch_taken_0x2d3a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A4Cu;
        // 0x2d3a50: 0x93a4001c  lbu         $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a4c) {
            ctx->pc = 0x2D3A80u;
            goto label_2d3a80;
        }
    }
    ctx->pc = 0x2D3A54u;
label_2d3a54:
    // 0x2d3a54: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d3a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d3a58:
    // 0x2d3a58: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2d3a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d3a5c:
    // 0x2d3a5c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x2d3a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d3a60:
    // 0x2d3a60: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2d3a60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d3a64:
    // 0x2d3a64: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2d3a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2d3a68:
    // 0x2d3a68: 0xc0b4d14  jal         func_2D3450
label_2d3a6c:
    if (ctx->pc == 0x2D3A6Cu) {
        ctx->pc = 0x2D3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A68u;
        // 0x2d3a6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3A70u;
        goto label_2d3a70;
    }
    ctx->pc = 0x2D3A68u;
    SET_GPR_U32(ctx, 31, 0x2D3A70u);
    ctx->pc = 0x2D3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A68u;
    // 0x2d3a6c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x2D3A68u, 0x2D3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A70u;
label_2d3a70:
    // 0x2d3a70: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2d3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2d3a74:
    // 0x2d3a74: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2d3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_2d3a78:
    // 0x2d3a78: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d3a7c:
    if (ctx->pc == 0x2D3A7Cu) {
        ctx->pc = 0x2D3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A78u;
        // 0x2d3a7c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3A80u;
        goto label_2d3a80;
    }
    ctx->pc = 0x2D3A78u;
    {
        const bool branch_taken_0x2d3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A78u;
        // 0x2d3a7c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a78) {
            ctx->pc = 0x2D3A9Cu;
            goto label_2d3a9c;
        }
    }
    ctx->pc = 0x2D3A80u;
label_2d3a80:
    // 0x2d3a80: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2d3a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d3a84:
    // 0x2d3a84: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x2d3a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d3a88:
    // 0x2d3a88: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2d3a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d3a8c:
    // 0x2d3a8c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2d3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2d3a90:
    // 0x2d3a90: 0xc0b4d14  jal         func_2D3450
label_2d3a94:
    if (ctx->pc == 0x2D3A94u) {
        ctx->pc = 0x2D3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A90u;
        // 0x2d3a94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3A98u;
        goto label_2d3a98;
    }
    ctx->pc = 0x2D3A90u;
    SET_GPR_U32(ctx, 31, 0x2D3A98u);
    ctx->pc = 0x2D3A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A90u;
    // 0x2d3a94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x2D3A90u, 0x2D3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A98u;
label_2d3a98:
    // 0x2d3a98: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2d3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2d3a9c:
    // 0x2d3a9c: 0x5220ffce  beql        $s1, $zero, . + 4 + (-0x32 << 2)
label_2d3aa0:
    if (ctx->pc == 0x2D3AA0u) {
        ctx->pc = 0x2D3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A9Cu;
        // 0x2d3aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3AA4u;
        goto label_2d3aa4;
    }
    ctx->pc = 0x2D3A9Cu;
    {
        const bool branch_taken_0x2d3a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a9c) {
            ctx->pc = 0x2D3AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3A9Cu;
            // 0x2d3aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D39D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d39d8;
        }
    }
    ctx->pc = 0x2D3AA4u;
label_2d3aa4:
    // 0x2d3aa4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d3aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d3aa8:
    // 0x2d3aa8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d3aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d3aac:
    // 0x2d3aac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d3aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d3ab0:
    // 0x2d3ab0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d3ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d3ab4:
    // 0x2d3ab4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d3ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d3ab8:
    // 0x2d3ab8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d3ab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2d3abc:
    // 0x2d3abc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d3abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d3ac0:
    // 0x2d3ac0: 0x3e00008  jr          $ra
label_2d3ac4:
    if (ctx->pc == 0x2D3AC4u) {
        ctx->pc = 0x2D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AC0u;
        // 0x2d3ac4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3AC8u;
        goto label_fallthrough_0x2d3ac0;
    }
    ctx->pc = 0x2D3AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AC0u;
        // 0x2d3ac4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d3ac0:
    ctx->pc = 0x2D3AC8u;
}
