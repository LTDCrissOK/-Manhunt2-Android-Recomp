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

// Function: sub_002A3848
// Address: 0x2a3848 - 0x2a3cf0
void sub_002A3848_0x2a3848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3848_0x2a3848");
#endif

    switch (ctx->pc) {
        case 0x2a3848u: goto label_2a3848;
        case 0x2a384cu: goto label_2a384c;
        case 0x2a3850u: goto label_2a3850;
        case 0x2a3854u: goto label_2a3854;
        case 0x2a3858u: goto label_2a3858;
        case 0x2a385cu: goto label_2a385c;
        case 0x2a3860u: goto label_2a3860;
        case 0x2a3864u: goto label_2a3864;
        case 0x2a3868u: goto label_2a3868;
        case 0x2a386cu: goto label_2a386c;
        case 0x2a3870u: goto label_2a3870;
        case 0x2a3874u: goto label_2a3874;
        case 0x2a3878u: goto label_2a3878;
        case 0x2a387cu: goto label_2a387c;
        case 0x2a3880u: goto label_2a3880;
        case 0x2a3884u: goto label_2a3884;
        case 0x2a3888u: goto label_2a3888;
        case 0x2a388cu: goto label_2a388c;
        case 0x2a3890u: goto label_2a3890;
        case 0x2a3894u: goto label_2a3894;
        case 0x2a3898u: goto label_2a3898;
        case 0x2a389cu: goto label_2a389c;
        case 0x2a38a0u: goto label_2a38a0;
        case 0x2a38a4u: goto label_2a38a4;
        case 0x2a38a8u: goto label_2a38a8;
        case 0x2a38acu: goto label_2a38ac;
        case 0x2a38b0u: goto label_2a38b0;
        case 0x2a38b4u: goto label_2a38b4;
        case 0x2a38b8u: goto label_2a38b8;
        case 0x2a38bcu: goto label_2a38bc;
        case 0x2a38c0u: goto label_2a38c0;
        case 0x2a38c4u: goto label_2a38c4;
        case 0x2a38c8u: goto label_2a38c8;
        case 0x2a38ccu: goto label_2a38cc;
        case 0x2a38d0u: goto label_2a38d0;
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38d8u: goto label_2a38d8;
        case 0x2a38dcu: goto label_2a38dc;
        case 0x2a38e0u: goto label_2a38e0;
        case 0x2a38e4u: goto label_2a38e4;
        case 0x2a38e8u: goto label_2a38e8;
        case 0x2a38ecu: goto label_2a38ec;
        case 0x2a38f0u: goto label_2a38f0;
        case 0x2a38f4u: goto label_2a38f4;
        case 0x2a38f8u: goto label_2a38f8;
        case 0x2a38fcu: goto label_2a38fc;
        case 0x2a3900u: goto label_2a3900;
        case 0x2a3904u: goto label_2a3904;
        case 0x2a3908u: goto label_2a3908;
        case 0x2a390cu: goto label_2a390c;
        case 0x2a3910u: goto label_2a3910;
        case 0x2a3914u: goto label_2a3914;
        case 0x2a3918u: goto label_2a3918;
        case 0x2a391cu: goto label_2a391c;
        case 0x2a3920u: goto label_2a3920;
        case 0x2a3924u: goto label_2a3924;
        case 0x2a3928u: goto label_2a3928;
        case 0x2a392cu: goto label_2a392c;
        case 0x2a3930u: goto label_2a3930;
        case 0x2a3934u: goto label_2a3934;
        case 0x2a3938u: goto label_2a3938;
        case 0x2a393cu: goto label_2a393c;
        case 0x2a3940u: goto label_2a3940;
        case 0x2a3944u: goto label_2a3944;
        case 0x2a3948u: goto label_2a3948;
        case 0x2a394cu: goto label_2a394c;
        case 0x2a3950u: goto label_2a3950;
        case 0x2a3954u: goto label_2a3954;
        case 0x2a3958u: goto label_2a3958;
        case 0x2a395cu: goto label_2a395c;
        case 0x2a3960u: goto label_2a3960;
        case 0x2a3964u: goto label_2a3964;
        case 0x2a3968u: goto label_2a3968;
        case 0x2a396cu: goto label_2a396c;
        case 0x2a3970u: goto label_2a3970;
        case 0x2a3974u: goto label_2a3974;
        case 0x2a3978u: goto label_2a3978;
        case 0x2a397cu: goto label_2a397c;
        case 0x2a3980u: goto label_2a3980;
        case 0x2a3984u: goto label_2a3984;
        case 0x2a3988u: goto label_2a3988;
        case 0x2a398cu: goto label_2a398c;
        case 0x2a3990u: goto label_2a3990;
        case 0x2a3994u: goto label_2a3994;
        case 0x2a3998u: goto label_2a3998;
        case 0x2a399cu: goto label_2a399c;
        case 0x2a39a0u: goto label_2a39a0;
        case 0x2a39a4u: goto label_2a39a4;
        case 0x2a39a8u: goto label_2a39a8;
        case 0x2a39acu: goto label_2a39ac;
        case 0x2a39b0u: goto label_2a39b0;
        case 0x2a39b4u: goto label_2a39b4;
        case 0x2a39b8u: goto label_2a39b8;
        case 0x2a39bcu: goto label_2a39bc;
        case 0x2a39c0u: goto label_2a39c0;
        case 0x2a39c4u: goto label_2a39c4;
        case 0x2a39c8u: goto label_2a39c8;
        case 0x2a39ccu: goto label_2a39cc;
        case 0x2a39d0u: goto label_2a39d0;
        case 0x2a39d4u: goto label_2a39d4;
        case 0x2a39d8u: goto label_2a39d8;
        case 0x2a39dcu: goto label_2a39dc;
        case 0x2a39e0u: goto label_2a39e0;
        case 0x2a39e4u: goto label_2a39e4;
        case 0x2a39e8u: goto label_2a39e8;
        case 0x2a39ecu: goto label_2a39ec;
        case 0x2a39f0u: goto label_2a39f0;
        case 0x2a39f4u: goto label_2a39f4;
        case 0x2a39f8u: goto label_2a39f8;
        case 0x2a39fcu: goto label_2a39fc;
        case 0x2a3a00u: goto label_2a3a00;
        case 0x2a3a04u: goto label_2a3a04;
        case 0x2a3a08u: goto label_2a3a08;
        case 0x2a3a0cu: goto label_2a3a0c;
        case 0x2a3a10u: goto label_2a3a10;
        case 0x2a3a14u: goto label_2a3a14;
        case 0x2a3a18u: goto label_2a3a18;
        case 0x2a3a1cu: goto label_2a3a1c;
        case 0x2a3a20u: goto label_2a3a20;
        case 0x2a3a24u: goto label_2a3a24;
        case 0x2a3a28u: goto label_2a3a28;
        case 0x2a3a2cu: goto label_2a3a2c;
        case 0x2a3a30u: goto label_2a3a30;
        case 0x2a3a34u: goto label_2a3a34;
        case 0x2a3a38u: goto label_2a3a38;
        case 0x2a3a3cu: goto label_2a3a3c;
        case 0x2a3a40u: goto label_2a3a40;
        case 0x2a3a44u: goto label_2a3a44;
        case 0x2a3a48u: goto label_2a3a48;
        case 0x2a3a4cu: goto label_2a3a4c;
        case 0x2a3a50u: goto label_2a3a50;
        case 0x2a3a54u: goto label_2a3a54;
        case 0x2a3a58u: goto label_2a3a58;
        case 0x2a3a5cu: goto label_2a3a5c;
        case 0x2a3a60u: goto label_2a3a60;
        case 0x2a3a64u: goto label_2a3a64;
        case 0x2a3a68u: goto label_2a3a68;
        case 0x2a3a6cu: goto label_2a3a6c;
        case 0x2a3a70u: goto label_2a3a70;
        case 0x2a3a74u: goto label_2a3a74;
        case 0x2a3a78u: goto label_2a3a78;
        case 0x2a3a7cu: goto label_2a3a7c;
        case 0x2a3a80u: goto label_2a3a80;
        case 0x2a3a84u: goto label_2a3a84;
        case 0x2a3a88u: goto label_2a3a88;
        case 0x2a3a8cu: goto label_2a3a8c;
        case 0x2a3a90u: goto label_2a3a90;
        case 0x2a3a94u: goto label_2a3a94;
        case 0x2a3a98u: goto label_2a3a98;
        case 0x2a3a9cu: goto label_2a3a9c;
        case 0x2a3aa0u: goto label_2a3aa0;
        case 0x2a3aa4u: goto label_2a3aa4;
        case 0x2a3aa8u: goto label_2a3aa8;
        case 0x2a3aacu: goto label_2a3aac;
        case 0x2a3ab0u: goto label_2a3ab0;
        case 0x2a3ab4u: goto label_2a3ab4;
        case 0x2a3ab8u: goto label_2a3ab8;
        case 0x2a3abcu: goto label_2a3abc;
        case 0x2a3ac0u: goto label_2a3ac0;
        case 0x2a3ac4u: goto label_2a3ac4;
        case 0x2a3ac8u: goto label_2a3ac8;
        case 0x2a3accu: goto label_2a3acc;
        case 0x2a3ad0u: goto label_2a3ad0;
        case 0x2a3ad4u: goto label_2a3ad4;
        case 0x2a3ad8u: goto label_2a3ad8;
        case 0x2a3adcu: goto label_2a3adc;
        case 0x2a3ae0u: goto label_2a3ae0;
        case 0x2a3ae4u: goto label_2a3ae4;
        case 0x2a3ae8u: goto label_2a3ae8;
        case 0x2a3aecu: goto label_2a3aec;
        case 0x2a3af0u: goto label_2a3af0;
        case 0x2a3af4u: goto label_2a3af4;
        case 0x2a3af8u: goto label_2a3af8;
        case 0x2a3afcu: goto label_2a3afc;
        case 0x2a3b00u: goto label_2a3b00;
        case 0x2a3b04u: goto label_2a3b04;
        case 0x2a3b08u: goto label_2a3b08;
        case 0x2a3b0cu: goto label_2a3b0c;
        case 0x2a3b10u: goto label_2a3b10;
        case 0x2a3b14u: goto label_2a3b14;
        case 0x2a3b18u: goto label_2a3b18;
        case 0x2a3b1cu: goto label_2a3b1c;
        case 0x2a3b20u: goto label_2a3b20;
        case 0x2a3b24u: goto label_2a3b24;
        case 0x2a3b28u: goto label_2a3b28;
        case 0x2a3b2cu: goto label_2a3b2c;
        case 0x2a3b30u: goto label_2a3b30;
        case 0x2a3b34u: goto label_2a3b34;
        case 0x2a3b38u: goto label_2a3b38;
        case 0x2a3b3cu: goto label_2a3b3c;
        case 0x2a3b40u: goto label_2a3b40;
        case 0x2a3b44u: goto label_2a3b44;
        case 0x2a3b48u: goto label_2a3b48;
        case 0x2a3b4cu: goto label_2a3b4c;
        case 0x2a3b50u: goto label_2a3b50;
        case 0x2a3b54u: goto label_2a3b54;
        case 0x2a3b58u: goto label_2a3b58;
        case 0x2a3b5cu: goto label_2a3b5c;
        case 0x2a3b60u: goto label_2a3b60;
        case 0x2a3b64u: goto label_2a3b64;
        case 0x2a3b68u: goto label_2a3b68;
        case 0x2a3b6cu: goto label_2a3b6c;
        case 0x2a3b70u: goto label_2a3b70;
        case 0x2a3b74u: goto label_2a3b74;
        case 0x2a3b78u: goto label_2a3b78;
        case 0x2a3b7cu: goto label_2a3b7c;
        case 0x2a3b80u: goto label_2a3b80;
        case 0x2a3b84u: goto label_2a3b84;
        case 0x2a3b88u: goto label_2a3b88;
        case 0x2a3b8cu: goto label_2a3b8c;
        case 0x2a3b90u: goto label_2a3b90;
        case 0x2a3b94u: goto label_2a3b94;
        case 0x2a3b98u: goto label_2a3b98;
        case 0x2a3b9cu: goto label_2a3b9c;
        case 0x2a3ba0u: goto label_2a3ba0;
        case 0x2a3ba4u: goto label_2a3ba4;
        case 0x2a3ba8u: goto label_2a3ba8;
        case 0x2a3bacu: goto label_2a3bac;
        case 0x2a3bb0u: goto label_2a3bb0;
        case 0x2a3bb4u: goto label_2a3bb4;
        case 0x2a3bb8u: goto label_2a3bb8;
        case 0x2a3bbcu: goto label_2a3bbc;
        case 0x2a3bc0u: goto label_2a3bc0;
        case 0x2a3bc4u: goto label_2a3bc4;
        case 0x2a3bc8u: goto label_2a3bc8;
        case 0x2a3bccu: goto label_2a3bcc;
        case 0x2a3bd0u: goto label_2a3bd0;
        case 0x2a3bd4u: goto label_2a3bd4;
        case 0x2a3bd8u: goto label_2a3bd8;
        case 0x2a3bdcu: goto label_2a3bdc;
        case 0x2a3be0u: goto label_2a3be0;
        case 0x2a3be4u: goto label_2a3be4;
        case 0x2a3be8u: goto label_2a3be8;
        case 0x2a3becu: goto label_2a3bec;
        case 0x2a3bf0u: goto label_2a3bf0;
        case 0x2a3bf4u: goto label_2a3bf4;
        case 0x2a3bf8u: goto label_2a3bf8;
        case 0x2a3bfcu: goto label_2a3bfc;
        case 0x2a3c00u: goto label_2a3c00;
        case 0x2a3c04u: goto label_2a3c04;
        case 0x2a3c08u: goto label_2a3c08;
        case 0x2a3c0cu: goto label_2a3c0c;
        case 0x2a3c10u: goto label_2a3c10;
        case 0x2a3c14u: goto label_2a3c14;
        case 0x2a3c18u: goto label_2a3c18;
        case 0x2a3c1cu: goto label_2a3c1c;
        case 0x2a3c20u: goto label_2a3c20;
        case 0x2a3c24u: goto label_2a3c24;
        case 0x2a3c28u: goto label_2a3c28;
        case 0x2a3c2cu: goto label_2a3c2c;
        case 0x2a3c30u: goto label_2a3c30;
        case 0x2a3c34u: goto label_2a3c34;
        case 0x2a3c38u: goto label_2a3c38;
        case 0x2a3c3cu: goto label_2a3c3c;
        case 0x2a3c40u: goto label_2a3c40;
        case 0x2a3c44u: goto label_2a3c44;
        case 0x2a3c48u: goto label_2a3c48;
        case 0x2a3c4cu: goto label_2a3c4c;
        case 0x2a3c50u: goto label_2a3c50;
        case 0x2a3c54u: goto label_2a3c54;
        case 0x2a3c58u: goto label_2a3c58;
        case 0x2a3c5cu: goto label_2a3c5c;
        case 0x2a3c60u: goto label_2a3c60;
        case 0x2a3c64u: goto label_2a3c64;
        case 0x2a3c68u: goto label_2a3c68;
        case 0x2a3c6cu: goto label_2a3c6c;
        case 0x2a3c70u: goto label_2a3c70;
        case 0x2a3c74u: goto label_2a3c74;
        case 0x2a3c78u: goto label_2a3c78;
        case 0x2a3c7cu: goto label_2a3c7c;
        case 0x2a3c80u: goto label_2a3c80;
        case 0x2a3c84u: goto label_2a3c84;
        case 0x2a3c88u: goto label_2a3c88;
        case 0x2a3c8cu: goto label_2a3c8c;
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3c94u: goto label_2a3c94;
        case 0x2a3c98u: goto label_2a3c98;
        case 0x2a3c9cu: goto label_2a3c9c;
        case 0x2a3ca0u: goto label_2a3ca0;
        case 0x2a3ca4u: goto label_2a3ca4;
        case 0x2a3ca8u: goto label_2a3ca8;
        case 0x2a3cacu: goto label_2a3cac;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cb4u: goto label_2a3cb4;
        case 0x2a3cb8u: goto label_2a3cb8;
        case 0x2a3cbcu: goto label_2a3cbc;
        case 0x2a3cc0u: goto label_2a3cc0;
        case 0x2a3cc4u: goto label_2a3cc4;
        case 0x2a3cc8u: goto label_2a3cc8;
        case 0x2a3cccu: goto label_2a3ccc;
        case 0x2a3cd0u: goto label_2a3cd0;
        case 0x2a3cd4u: goto label_2a3cd4;
        case 0x2a3cd8u: goto label_2a3cd8;
        case 0x2a3cdcu: goto label_2a3cdc;
        case 0x2a3ce0u: goto label_2a3ce0;
        case 0x2a3ce4u: goto label_2a3ce4;
        case 0x2a3ce8u: goto label_2a3ce8;
        case 0x2a3cecu: goto label_2a3cec;
        default: break;
    }

    ctx->pc = 0x2a3848u;

label_2a3848:
    // 0x2a3848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a384c:
    // 0x2a384c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a384cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3850:
    // 0x2a3850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a3854:
    // 0x2a3854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a3854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a3858:
    // 0x2a3858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a385c:
    // 0x2a385c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3860:
    // 0x2a3860: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a3860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3864:
    // 0x2a3864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a3868:
    if (ctx->pc == 0x2A3868u) {
        ctx->pc = 0x2A3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3864u;
        // 0x2a3868: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A386Cu;
        goto label_2a386c;
    }
    ctx->pc = 0x2A3864u;
    {
        const bool branch_taken_0x2a3864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3864u;
        // 0x2a3868: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3864) {
            ctx->pc = 0x2A3874u;
            goto label_2a3874;
        }
    }
    ctx->pc = 0x2A386Cu;
label_2a386c:
    // 0x2a386c: 0xc0c7a76  jal         func_31E9D8
label_2a3870:
    if (ctx->pc == 0x2A3870u) {
        ctx->pc = 0x2A3874u;
        goto label_2a3874;
    }
    ctx->pc = 0x2A386Cu;
    SET_GPR_U32(ctx, 31, 0x2A3874u);
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2A386Cu, 0x2A3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3874u;
label_2a3874:
    // 0x2a3874: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2a3878:
    if (ctx->pc == 0x2A3878u) {
        ctx->pc = 0x2A3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3874u;
        // 0x2a3878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A387Cu;
        goto label_2a387c;
    }
    ctx->pc = 0x2A3874u;
    {
        const bool branch_taken_0x2a3874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3874) {
            ctx->pc = 0x2A3878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3874u;
            // 0x2a3878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38B0u;
            goto label_2a38b0;
        }
    }
    ctx->pc = 0x2A387Cu;
label_2a387c:
    // 0x2a387c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a3880:
    // 0x2a3880: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a3884:
    if (ctx->pc == 0x2A3884u) {
        ctx->pc = 0x2A3888u;
        goto label_2a3888;
    }
    ctx->pc = 0x2A3880u;
    {
        const bool branch_taken_0x2a3880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3880) {
            ctx->pc = 0x2A3890u;
            goto label_2a3890;
        }
    }
    ctx->pc = 0x2A3888u;
label_2a3888:
    // 0x2a3888: 0xc0c7a76  jal         func_31E9D8
label_2a388c:
    if (ctx->pc == 0x2A388Cu) {
        ctx->pc = 0x2A388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3888u;
        // 0x2a388c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3890u;
        goto label_2a3890;
    }
    ctx->pc = 0x2A3888u;
    SET_GPR_U32(ctx, 31, 0x2A3890u);
    ctx->pc = 0x2A388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3888u;
    // 0x2a388c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2A3888u, 0x2A3890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3890u;
label_2a3890:
    // 0x2a3890: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2a3894:
    if (ctx->pc == 0x2A3894u) {
        ctx->pc = 0x2A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3890u;
        // 0x2a3894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3898u;
        goto label_2a3898;
    }
    ctx->pc = 0x2A3890u;
    {
        const bool branch_taken_0x2a3890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3890) {
            ctx->pc = 0x2A3894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3890u;
            // 0x2a3894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38B0u;
            goto label_2a38b0;
        }
    }
    ctx->pc = 0x2A3898u;
label_2a3898:
    // 0x2a3898: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a3898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a389c:
    // 0x2a389c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2a38a0:
    if (ctx->pc == 0x2A38A0u) {
        ctx->pc = 0x2A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A389Cu;
        // 0x2a38a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38A4u;
        goto label_2a38a4;
    }
    ctx->pc = 0x2A389Cu;
    {
        const bool branch_taken_0x2a389c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A389Cu;
        // 0x2a38a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a389c) {
            ctx->pc = 0x2A38B0u;
            goto label_2a38b0;
        }
    }
    ctx->pc = 0x2A38A4u;
label_2a38a4:
    // 0x2a38a4: 0xc0c7a76  jal         func_31E9D8
label_2a38a8:
    if (ctx->pc == 0x2A38A8u) {
        ctx->pc = 0x2A38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38A4u;
        // 0x2a38a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38ACu;
        goto label_2a38ac;
    }
    ctx->pc = 0x2A38A4u;
    SET_GPR_U32(ctx, 31, 0x2A38ACu);
    ctx->pc = 0x2A38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38A4u;
    // 0x2a38a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2A38A4u, 0x2A38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38ACu;
label_2a38ac:
    // 0x2a38ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a38acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a38b0:
    // 0x2a38b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a38b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a38b4:
    // 0x2a38b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a38b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a38b8:
    // 0x2a38b8: 0x3e00008  jr          $ra
label_2a38bc:
    if (ctx->pc == 0x2A38BCu) {
        ctx->pc = 0x2A38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38B8u;
        // 0x2a38bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38C0u;
        goto label_2a38c0;
    }
    ctx->pc = 0x2A38B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38B8u;
        // 0x2a38bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A38B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A38C0u;
label_2a38c0:
    // 0x2a38c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2a38c4:
    // 0x2a38c4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2a38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_2a38c8:
    // 0x2a38c8: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2a38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
label_2a38cc:
    // 0x2a38cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a38ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a38d0:
    // 0x2a38d0: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2a38d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
label_2a38d4:
    // 0x2a38d4: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2a38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_2a38d8:
    // 0x2a38d8: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2a38d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
label_2a38dc:
    // 0x2a38dc: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2a38dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
label_2a38e0:
    // 0x2a38e0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2a38e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
label_2a38e4:
    // 0x2a38e4: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2a38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
label_2a38e8:
    // 0x2a38e8: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x2a38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
label_2a38ec:
    // 0x2a38ec: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2a38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_2a38f0:
    // 0x2a38f0: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x2a38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
label_2a38f4:
    // 0x2a38f4: 0xc0d737c  jal         func_35CDF0
label_2a38f8:
    if (ctx->pc == 0x2A38F8u) {
        ctx->pc = 0x2A38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38F4u;
        // 0x2a38f8: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A38FCu;
        goto label_2a38fc;
    }
    ctx->pc = 0x2A38F4u;
    SET_GPR_U32(ctx, 31, 0x2A38FCu);
    ctx->pc = 0x2A38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38F4u;
    // 0x2a38f8: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A38F4u, 0x2A38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38FCu;
label_2a38fc:
    // 0x2a38fc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2a38fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a3900:
    // 0x2a3900: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2a3900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a3904:
    // 0x2a3904: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a3904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a3908:
    // 0x2a3908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a390c:
    // 0x2a390c: 0xc0d74a8  jal         func_35D2A0
label_2a3910:
    if (ctx->pc == 0x2A3910u) {
        ctx->pc = 0x2A3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A390Cu;
        // 0x2a3910: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3914u;
        goto label_2a3914;
    }
    ctx->pc = 0x2A390Cu;
    SET_GPR_U32(ctx, 31, 0x2A3914u);
    ctx->pc = 0x2A3910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A390Cu;
    // 0x2a3910: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x2A390Cu, 0x2A3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3914u;
label_2a3914:
    // 0x2a3914: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2a3914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_2a3918:
    // 0x2a3918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a391c:
    // 0x2a391c: 0x24c6d540  addiu       $a2, $a2, -0x2AC0
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956352));
label_2a3920:
    // 0x2a3920: 0xc0d74c6  jal         func_35D318
label_2a3924:
    if (ctx->pc == 0x2A3924u) {
        ctx->pc = 0x2A3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3920u;
        // 0x2a3924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3928u;
        goto label_2a3928;
    }
    ctx->pc = 0x2A3920u;
    SET_GPR_U32(ctx, 31, 0x2A3928u);
    ctx->pc = 0x2A3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3920u;
    // 0x2a3924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2A3920u, 0x2A3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3928u;
label_2a3928:
    // 0x2a3928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a392c:
    // 0x2a392c: 0xc0d745c  jal         func_35D170
label_2a3930:
    if (ctx->pc == 0x2A3930u) {
        ctx->pc = 0x2A3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A392Cu;
        // 0x2a3930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3934u;
        goto label_2a3934;
    }
    ctx->pc = 0x2A392Cu;
    SET_GPR_U32(ctx, 31, 0x2A3934u);
    ctx->pc = 0x2A3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A392Cu;
    // 0x2a3930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A392Cu, 0x2A3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3934u;
label_2a3934:
    // 0x2a3934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3938:
    // 0x2a3938: 0xc0d7412  jal         func_35D048
label_2a393c:
    if (ctx->pc == 0x2A393Cu) {
        ctx->pc = 0x2A393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3938u;
        // 0x2a393c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3940u;
        goto label_2a3940;
    }
    ctx->pc = 0x2A3938u;
    SET_GPR_U32(ctx, 31, 0x2A3940u);
    ctx->pc = 0x2A393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3938u;
    // 0x2a393c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A3938u, 0x2A3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3940u;
label_2a3940:
    // 0x2a3940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3944:
    // 0x2a3944: 0xc0d7412  jal         func_35D048
label_2a3948:
    if (ctx->pc == 0x2A3948u) {
        ctx->pc = 0x2A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3944u;
        // 0x2a3948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A394Cu;
        goto label_2a394c;
    }
    ctx->pc = 0x2A3944u;
    SET_GPR_U32(ctx, 31, 0x2A394Cu);
    ctx->pc = 0x2A3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3944u;
    // 0x2a3948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A3944u, 0x2A394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A394Cu;
label_2a394c:
    // 0x2a394c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2a394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3950:
    // 0x2a3950: 0xc09dcc6  jal         func_277318
label_2a3954:
    if (ctx->pc == 0x2A3954u) {
        ctx->pc = 0x2A3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3950u;
        // 0x2a3954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3958u;
        goto label_2a3958;
    }
    ctx->pc = 0x2A3950u;
    SET_GPR_U32(ctx, 31, 0x2A3958u);
    ctx->pc = 0x2A3954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3950u;
    // 0x2a3954: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2A3950u, 0x2A3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3958u;
label_2a3958:
    // 0x2a3958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a395c:
    // 0x2a395c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_2a3960:
    if (ctx->pc == 0x2A3960u) {
        ctx->pc = 0x2A3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A395Cu;
        // 0x2a3960: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3964u;
        goto label_2a3964;
    }
    ctx->pc = 0x2A395Cu;
    {
        const bool branch_taken_0x2a395c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a395c) {
            ctx->pc = 0x2A3960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A395Cu;
            // 0x2a3960: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3978u;
            goto label_2a3978;
        }
    }
    ctx->pc = 0x2A3964u;
label_2a3964:
    // 0x2a3964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a3964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a3968:
    // 0x2a3968: 0xc0d7412  jal         func_35D048
label_2a396c:
    if (ctx->pc == 0x2A396Cu) {
        ctx->pc = 0x2A396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3968u;
        // 0x2a396c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3970u;
        goto label_2a3970;
    }
    ctx->pc = 0x2A3968u;
    SET_GPR_U32(ctx, 31, 0x2A3970u);
    ctx->pc = 0x2A396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3968u;
    // 0x2a396c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A3968u, 0x2A3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3970u;
label_2a3970:
    // 0x2a3970: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_2a3974:
    if (ctx->pc == 0x2A3974u) {
        ctx->pc = 0x2A3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3970u;
        // 0x2a3974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3978u;
        goto label_2a3978;
    }
    ctx->pc = 0x2A3970u;
    {
        const bool branch_taken_0x2a3970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3970u;
        // 0x2a3974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3970) {
            ctx->pc = 0x2A3CBCu;
            goto label_2a3cbc;
        }
    }
    ctx->pc = 0x2A3978u;
label_2a3978:
    // 0x2a3978: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a3978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a397c:
    // 0x2a397c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3980:
    // 0x2a3980: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a3984:
    // 0x2a3984: 0x40f809  jalr        $v0
label_2a3988:
    if (ctx->pc == 0x2A3988u) {
        ctx->pc = 0x2A3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3984u;
        // 0x2a3988: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A398Cu;
        goto label_2a398c;
    }
    ctx->pc = 0x2A3984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A398Cu);
        ctx->pc = 0x2A3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3984u;
        // 0x2a3988: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3984u, 0x2A398Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A398Cu;
label_2a398c:
    // 0x2a398c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3990:
    // 0x2a3990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3994:
    // 0x2a3994: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a3994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a3998:
    // 0x2a3998: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a3998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a399c:
    // 0x2a399c: 0x40f809  jalr        $v0
label_2a39a0:
    if (ctx->pc == 0x2A39A0u) {
        ctx->pc = 0x2A39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A399Cu;
        // 0x2a39a0: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39A4u;
        goto label_2a39a4;
    }
    ctx->pc = 0x2A399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A39A4u);
        ctx->pc = 0x2A39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A399Cu;
        // 0x2a39a0: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A399Cu, 0x2A39A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A39A4u;
label_2a39a4:
    // 0x2a39a4: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x2a39a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a39a8:
    // 0x2a39a8: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x2a39a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2a39ac:
    // 0x2a39ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a39acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2a39b0:
    // 0x2a39b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a39b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2a39b4:
    // 0x2a39b4: 0x97a4006a  lhu         $a0, 0x6A($sp)
    ctx->pc = 0x2a39b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
label_2a39b8:
    // 0x2a39b8: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x2a39b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
label_2a39bc:
    // 0x2a39bc: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x2a39bcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
label_2a39c0:
    // 0x2a39c0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2a39c4:
    if (ctx->pc == 0x2A39C4u) {
        ctx->pc = 0x2A39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39C0u;
        // 0x2a39c4: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39C8u;
        goto label_2a39c8;
    }
    ctx->pc = 0x2A39C0u;
    {
        const bool branch_taken_0x2a39c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39C0u;
        // 0x2a39c4: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39c0) {
            ctx->pc = 0x2A39DCu;
            goto label_2a39dc;
        }
    }
    ctx->pc = 0x2A39C8u;
label_2a39c8:
    // 0x2a39c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a39c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a39cc:
    // 0x2a39cc: 0x0  nop
    ctx->pc = 0x2a39ccu;
    // NOP
label_2a39d0:
    // 0x2a39d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a39d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a39d4:
    // 0x2a39d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a39d8:
    if (ctx->pc == 0x2A39D8u) {
        ctx->pc = 0x2A39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39D4u;
        // 0x2a39d8: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A39DCu;
        goto label_2a39dc;
    }
    ctx->pc = 0x2A39D4u;
    {
        const bool branch_taken_0x2a39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39D4u;
        // 0x2a39d8: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39d4) {
            ctx->pc = 0x2A39FCu;
            goto label_2a39fc;
        }
    }
    ctx->pc = 0x2A39DCu;
label_2a39dc:
    // 0x2a39dc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2a39dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2a39e0:
    // 0x2a39e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a39e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2a39e4:
    // 0x2a39e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a39e8:
    // 0x2a39e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a39ec:
    // 0x2a39ec: 0x0  nop
    ctx->pc = 0x2a39ecu;
    // NOP
label_2a39f0:
    // 0x2a39f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a39f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a39f4:
    // 0x2a39f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a39f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a39f8:
    // 0x2a39f8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x2a39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a39fc:
    // 0x2a39fc: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x2a39fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_2a3a00:
    // 0x2a3a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a3a04:
    // 0x2a3a04: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x2a3a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a3a08:
    // 0x2a3a08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a3a0c:
    if (ctx->pc == 0x2A3A0Cu) {
        ctx->pc = 0x2A3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A08u;
        // 0x2a3a0c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A10u;
        goto label_2a3a10;
    }
    ctx->pc = 0x2A3A08u;
    {
        const bool branch_taken_0x2a3a08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A08u;
        // 0x2a3a0c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a08) {
            ctx->pc = 0x2A3A24u;
            goto label_2a3a24;
        }
    }
    ctx->pc = 0x2A3A10u;
label_2a3a10:
    // 0x2a3a10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3a14:
    // 0x2a3a14: 0x0  nop
    ctx->pc = 0x2a3a14u;
    // NOP
label_2a3a18:
    // 0x2a3a18: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a3a1c:
    // 0x2a3a1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2a3a20:
    if (ctx->pc == 0x2A3A20u) {
        ctx->pc = 0x2A3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A1Cu;
        // 0x2a3a20: 0x8fa200a4  lw          $v0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A24u;
        goto label_2a3a24;
    }
    ctx->pc = 0x2A3A1Cu;
    {
        const bool branch_taken_0x2a3a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A1Cu;
        // 0x2a3a20: 0x8fa200a4  lw          $v0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a1c) {
            ctx->pc = 0x2A3A44u;
            goto label_2a3a44;
        }
    }
    ctx->pc = 0x2A3A24u;
label_2a3a24:
    // 0x2a3a24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a3a28:
    // 0x2a3a28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a3a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a3a2c:
    // 0x2a3a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a3a30:
    // 0x2a3a30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3a34:
    // 0x2a3a34: 0x0  nop
    ctx->pc = 0x2a3a34u;
    // NOP
label_2a3a38:
    // 0x2a3a38: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a3a3c:
    // 0x2a3a3c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a3a3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a3a40:
    // 0x2a3a40: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2a3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a3a44:
    // 0x2a3a44: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2a3a44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_2a3a48:
    // 0x2a3a48: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2a3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a3a4c:
    // 0x2a3a4c: 0xc0dde53  jal         func_37794C
label_2a3a50:
    if (ctx->pc == 0x2A3A50u) {
        ctx->pc = 0x2A3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A4Cu;
        // 0x2a3a50: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A54u;
        goto label_2a3a54;
    }
    ctx->pc = 0x2A3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A54u);
    ctx->pc = 0x2A3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A4Cu;
    // 0x2a3a50: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A3A4Cu, 0x2A3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A54u;
label_2a3a54:
    // 0x2a3a54: 0x97a3006a  lhu         $v1, 0x6A($sp)
    ctx->pc = 0x2a3a54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
label_2a3a58:
    // 0x2a3a58: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a3a58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a5c:
    // 0x2a3a5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a3a60:
    // 0x2a3a60: 0x628804  sllv        $s1, $v0, $v1
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2a3a64:
    // 0x2a3a64: 0xc0f52a8  jal         func_3D4AA0
label_2a3a68:
    if (ctx->pc == 0x2A3A68u) {
        ctx->pc = 0x2A3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A64u;
        // 0x2a3a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A6Cu;
        goto label_2a3a6c;
    }
    ctx->pc = 0x2A3A64u;
    SET_GPR_U32(ctx, 31, 0x2A3A6Cu);
    ctx->pc = 0x2A3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A64u;
    // 0x2a3a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2A3A64u, 0x2A3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A6Cu;
label_2a3a6c:
    // 0x2a3a6c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_2a3a70:
    // 0x2a3a70: 0xc0f52a8  jal         func_3D4AA0
label_2a3a74:
    if (ctx->pc == 0x2A3A74u) {
        ctx->pc = 0x2A3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A70u;
        // 0x2a3a74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A78u;
        goto label_2a3a78;
    }
    ctx->pc = 0x2A3A70u;
    SET_GPR_U32(ctx, 31, 0x2A3A78u);
    ctx->pc = 0x2A3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A70u;
    // 0x2a3a74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2A3A70u, 0x2A3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A78u;
label_2a3a78:
    // 0x2a3a78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3a7c:
    // 0x2a3a7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a3a7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a80:
    // 0x2a3a80: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a3a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2a3a84:
    // 0x2a3a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a88:
    // 0x2a3a88: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a3a8c:
    // 0x2a3a8c: 0x40f809  jalr        $v0
label_2a3a90:
    if (ctx->pc == 0x2A3A90u) {
        ctx->pc = 0x2A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A8Cu;
        // 0x2a3a90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3A94u;
        goto label_2a3a94;
    }
    ctx->pc = 0x2A3A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3A94u);
        ctx->pc = 0x2A3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A8Cu;
        // 0x2a3a90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3A8Cu, 0x2A3A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3A94u;
label_2a3a94:
    // 0x2a3a94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3a98:
    // 0x2a3a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a9c:
    // 0x2a3a9c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a3a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a3aa0:
    // 0x2a3aa0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a3aa4:
    // 0x2a3aa4: 0x40f809  jalr        $v0
label_2a3aa8:
    if (ctx->pc == 0x2A3AA8u) {
        ctx->pc = 0x2A3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AA4u;
        // 0x2a3aa8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3AACu;
        goto label_2a3aac;
    }
    ctx->pc = 0x2A3AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3AACu);
        ctx->pc = 0x2A3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AA4u;
        // 0x2a3aa8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3AA4u, 0x2A3AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3AACu;
label_2a3aac:
    // 0x2a3aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a3ab0:
    // 0x2a3ab0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2a3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2a3ab4:
    // 0x2a3ab4: 0x40f809  jalr        $v0
label_2a3ab8:
    if (ctx->pc == 0x2A3AB8u) {
        ctx->pc = 0x2A3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AB4u;
        // 0x2a3ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3ABCu;
        goto label_2a3abc;
    }
    ctx->pc = 0x2A3AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3ABCu);
        ctx->pc = 0x2A3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AB4u;
        // 0x2a3ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3AB4u, 0x2A3ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3ABCu;
label_2a3abc:
    // 0x2a3abc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2a3ac0:
    if (ctx->pc == 0x2A3AC0u) {
        ctx->pc = 0x2A3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3ABCu;
        // 0x2a3ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3AC4u;
        goto label_2a3ac4;
    }
    ctx->pc = 0x2A3ABCu;
    {
        const bool branch_taken_0x2a3abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3ABCu;
        // 0x2a3ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3abc) {
            ctx->pc = 0x2A3AE0u;
            goto label_2a3ae0;
        }
    }
    ctx->pc = 0x2A3AC4u;
label_2a3ac4:
    // 0x2a3ac4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2a3ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3ac8:
    // 0x2a3ac8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2a3acc:
    // 0x2a3acc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2a3accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a3ad0:
    // 0x2a3ad0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a3ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2a3ad4:
    // 0x2a3ad4: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x2a3ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2a3ad8:
    // 0x2a3ad8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2a3adc:
    if (ctx->pc == 0x2A3ADCu) {
        ctx->pc = 0x2A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AD8u;
        // 0x2a3adc: 0xa0650003  sb          $a1, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3AE0u;
        goto label_2a3ae0;
    }
    ctx->pc = 0x2A3AD8u;
    {
        const bool branch_taken_0x2a3ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AD8u;
        // 0x2a3adc: 0xa0650003  sb          $a1, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ad8) {
            ctx->pc = 0x2A3AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3ac8;
        }
    }
    ctx->pc = 0x2A3AE0u;
label_2a3ae0:
    // 0x2a3ae0: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
label_2a3ae4:
    if (ctx->pc == 0x2A3AE4u) {
        ctx->pc = 0x2A3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AE0u;
        // 0x2a3ae4: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3AE8u;
        goto label_2a3ae8;
    }
    ctx->pc = 0x2A3AE0u;
    {
        const bool branch_taken_0x2a3ae0 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x2A3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AE0u;
        // 0x2a3ae4: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ae0) {
            ctx->pc = 0x2A3AFCu;
            goto label_2a3afc;
        }
    }
    ctx->pc = 0x2A3AE8u;
label_2a3ae8:
    // 0x2a3ae8: 0x44956000  mtc1        $s5, $f12
    ctx->pc = 0x2a3ae8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3aec:
    // 0x2a3aec: 0x0  nop
    ctx->pc = 0x2a3aecu;
    // NOP
label_2a3af0:
    // 0x2a3af0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a3af4:
    // 0x2a3af4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a3af8:
    if (ctx->pc == 0x2A3AF8u) {
        ctx->pc = 0x2A3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AF4u;
        // 0x2a3af8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3AFCu;
        goto label_2a3afc;
    }
    ctx->pc = 0x2A3AF4u;
    {
        const bool branch_taken_0x2a3af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AF4u;
        // 0x2a3af8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3af4) {
            ctx->pc = 0x2A3B18u;
            goto label_2a3b18;
        }
    }
    ctx->pc = 0x2A3AFCu;
label_2a3afc:
    // 0x2a3afc: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2a3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_2a3b00:
    // 0x2a3b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a3b04:
    // 0x2a3b04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3b08:
    // 0x2a3b08: 0x0  nop
    ctx->pc = 0x2a3b08u;
    // NOP
label_2a3b0c:
    // 0x2a3b0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a3b10:
    // 0x2a3b10: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a3b10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a3b14:
    // 0x2a3b14: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2a3b14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_2a3b18:
    // 0x2a3b18: 0xc0dde53  jal         func_37794C
label_2a3b1c:
    if (ctx->pc == 0x2A3B1Cu) {
        ctx->pc = 0x2A3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B18u;
        // 0x2a3b1c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B20u;
        goto label_2a3b20;
    }
    ctx->pc = 0x2A3B18u;
    SET_GPR_U32(ctx, 31, 0x2A3B20u);
    ctx->pc = 0x2A3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B18u;
    // 0x2a3b1c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A3B18u, 0x2A3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B20u;
label_2a3b20:
    // 0x2a3b20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a3b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b24:
    // 0x2a3b24: 0xc0f52a8  jal         func_3D4AA0
label_2a3b28:
    if (ctx->pc == 0x2A3B28u) {
        ctx->pc = 0x2A3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B24u;
        // 0x2a3b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B2Cu;
        goto label_2a3b2c;
    }
    ctx->pc = 0x2A3B24u;
    SET_GPR_U32(ctx, 31, 0x2A3B2Cu);
    ctx->pc = 0x2A3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B24u;
    // 0x2a3b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2A3B24u, 0x2A3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B2Cu;
label_2a3b2c:
    // 0x2a3b2c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2a3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a3b30:
    // 0x2a3b30: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_2a3b34:
    if (ctx->pc == 0x2A3B34u) {
        ctx->pc = 0x2A3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B30u;
        // 0x2a3b34: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B38u;
        goto label_2a3b38;
    }
    ctx->pc = 0x2A3B30u;
    {
        const bool branch_taken_0x2a3b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B30u;
        // 0x2a3b34: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b30) {
            ctx->pc = 0x2A3BD8u;
            goto label_2a3bd8;
        }
    }
    ctx->pc = 0x2A3B38u;
label_2a3b38:
    // 0x2a3b38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a3b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b3c:
    // 0x2a3b3c: 0x0  nop
    ctx->pc = 0x2a3b3cu;
    // NOP
label_2a3b40:
    // 0x2a3b40: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_2a3b44:
    if (ctx->pc == 0x2A3B44u) {
        ctx->pc = 0x2A3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B40u;
        // 0x2a3b44: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B48u;
        goto label_2a3b48;
    }
    ctx->pc = 0x2A3B40u;
    {
        const bool branch_taken_0x2a3b40 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2A3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B40u;
        // 0x2a3b44: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b40) {
            ctx->pc = 0x2A3B5Cu;
            goto label_2a3b5c;
        }
    }
    ctx->pc = 0x2A3B48u;
label_2a3b48:
    // 0x2a3b48: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x2a3b48u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3b4c:
    // 0x2a3b4c: 0x0  nop
    ctx->pc = 0x2a3b4cu;
    // NOP
label_2a3b50:
    // 0x2a3b50: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a3b54:
    // 0x2a3b54: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a3b58:
    if (ctx->pc == 0x2A3B58u) {
        ctx->pc = 0x2A3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B54u;
        // 0x2a3b58: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B5Cu;
        goto label_2a3b5c;
    }
    ctx->pc = 0x2A3B54u;
    {
        const bool branch_taken_0x2a3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B54u;
        // 0x2a3b58: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b54) {
            ctx->pc = 0x2A3B78u;
            goto label_2a3b78;
        }
    }
    ctx->pc = 0x2A3B5Cu;
label_2a3b5c:
    // 0x2a3b5c: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x2a3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_2a3b60:
    // 0x2a3b60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a3b64:
    // 0x2a3b64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a3b68:
    // 0x2a3b68: 0x0  nop
    ctx->pc = 0x2a3b68u;
    // NOP
label_2a3b6c:
    // 0x2a3b6c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a3b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2a3b70:
    // 0x2a3b70: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a3b70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a3b74:
    // 0x2a3b74: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2a3b74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_2a3b78:
    // 0x2a3b78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a3b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a3b7c:
    // 0x2a3b7c: 0xc0dde53  jal         func_37794C
label_2a3b80:
    if (ctx->pc == 0x2A3B80u) {
        ctx->pc = 0x2A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B7Cu;
        // 0x2a3b80: 0x2759821  addu        $s3, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B84u;
        goto label_2a3b84;
    }
    ctx->pc = 0x2A3B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A3B84u);
    ctx->pc = 0x2A3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B7Cu;
    // 0x2a3b80: 0x2759821  addu        $s3, $s3, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A3B7Cu, 0x2A3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B84u;
label_2a3b84:
    // 0x2a3b84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b88:
    // 0x2a3b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a3b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b8c:
    // 0x2a3b8c: 0x2f08821  addu        $s1, $s7, $s0
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_2a3b90:
    // 0x2a3b90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b94:
    // 0x2a3b94: 0xc0efa49  jal         func_3BE924
label_2a3b98:
    if (ctx->pc == 0x2A3B98u) {
        ctx->pc = 0x2A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B94u;
        // 0x2a3b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3B9Cu;
        goto label_2a3b9c;
    }
    ctx->pc = 0x2A3B94u;
    SET_GPR_U32(ctx, 31, 0x2A3B9Cu);
    ctx->pc = 0x2A3B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B94u;
    // 0x2a3b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2A3B94u, 0x2A3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B9Cu;
label_2a3b9c:
    // 0x2a3b9c: 0x3d08023  subu        $s0, $fp, $s0
    ctx->pc = 0x2a3b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_2a3ba0:
    // 0x2a3ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3ba4:
    // 0x2a3ba4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2a3ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2a3ba8:
    // 0x2a3ba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bac:
    // 0x2a3bac: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x2a3bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_2a3bb0:
    // 0x2a3bb0: 0xc0efa49  jal         func_3BE924
label_2a3bb4:
    if (ctx->pc == 0x2A3BB4u) {
        ctx->pc = 0x2A3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BB0u;
        // 0x2a3bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BB8u;
        goto label_2a3bb8;
    }
    ctx->pc = 0x2A3BB0u;
    SET_GPR_U32(ctx, 31, 0x2A3BB8u);
    ctx->pc = 0x2A3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BB0u;
    // 0x2a3bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2A3BB0u, 0x2A3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BB8u;
label_2a3bb8:
    // 0x2a3bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bbc:
    // 0x2a3bbc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a3bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a3bc0:
    // 0x2a3bc0: 0xc0efa49  jal         func_3BE924
label_2a3bc4:
    if (ctx->pc == 0x2A3BC4u) {
        ctx->pc = 0x2A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BC0u;
        // 0x2a3bc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BC8u;
        goto label_2a3bc8;
    }
    ctx->pc = 0x2A3BC0u;
    SET_GPR_U32(ctx, 31, 0x2A3BC8u);
    ctx->pc = 0x2A3BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BC0u;
    // 0x2a3bc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2A3BC0u, 0x2A3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BC8u;
label_2a3bc8:
    // 0x2a3bc8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a3bcc:
    // 0x2a3bcc: 0x282182b  sltu        $v1, $s4, $v0
    ctx->pc = 0x2a3bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a3bd0:
    // 0x2a3bd0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_2a3bd4:
    if (ctx->pc == 0x2A3BD4u) {
        ctx->pc = 0x2A3BD8u;
        goto label_2a3bd8;
    }
    ctx->pc = 0x2A3BD0u;
    {
        const bool branch_taken_0x2a3bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3bd0) {
            ctx->pc = 0x2A3B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3b40;
        }
    }
    ctx->pc = 0x2A3BD8u;
label_2a3bd8:
    // 0x2a3bd8: 0x97a2006a  lhu         $v0, 0x6A($sp)
    ctx->pc = 0x2a3bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
label_2a3bdc:
    // 0x2a3bdc: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x2a3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2a3be0:
    // 0x2a3be0: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x2a3be0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_2a3be4:
    // 0x2a3be4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2a3be8:
    if (ctx->pc == 0x2A3BE8u) {
        ctx->pc = 0x2A3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BE4u;
        // 0x2a3be8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3BECu;
        goto label_2a3bec;
    }
    ctx->pc = 0x2A3BE4u;
    {
        const bool branch_taken_0x2a3be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BE4u;
        // 0x2a3be8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3be4) {
            ctx->pc = 0x2A3C28u;
            goto label_2a3c28;
        }
    }
    ctx->pc = 0x2A3BECu;
label_2a3bec:
    // 0x2a3bec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a3becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a3bf0:
    // 0x2a3bf0: 0x2442d550  addiu       $v0, $v0, -0x2AB0
    ctx->pc = 0x2a3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956368));
label_2a3bf4:
    // 0x2a3bf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a3bf8:
    // 0x2a3bf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3bfc:
    // 0x2a3bfc: 0x800008  jr          $a0
label_2a3c00:
    if (ctx->pc == 0x2A3C00u) {
        ctx->pc = 0x2A3C04u;
        goto label_2a3c04;
    }
    ctx->pc = 0x2A3BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3C04u: goto label_2a3c04;
            case 0x2A3C0Cu: goto label_2a3c0c;
            case 0x2A3C18u: goto label_2a3c18;
            case 0x2A3C20u: goto label_2a3c20;
            case 0x2A3C28u: goto label_2a3c28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3BFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A3C04u;
label_2a3c04:
    // 0x2a3c04: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a3c08:
    if (ctx->pc == 0x2A3C08u) {
        ctx->pc = 0x2A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C04u;
        // 0x2a3c08: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C0Cu;
        goto label_2a3c0c;
    }
    ctx->pc = 0x2A3C04u;
    {
        const bool branch_taken_0x2a3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C04u;
        // 0x2a3c08: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c04) {
            ctx->pc = 0x2A3C24u;
            goto label_2a3c24;
        }
    }
    ctx->pc = 0x2A3C0Cu;
label_2a3c0c:
    // 0x2a3c0c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2a3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2a3c10:
    // 0x2a3c10: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a3c14:
    if (ctx->pc == 0x2A3C14u) {
        ctx->pc = 0x2A3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C10u;
        // 0x2a3c14: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C18u;
        goto label_2a3c18;
    }
    ctx->pc = 0x2A3C10u;
    {
        const bool branch_taken_0x2a3c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C10u;
        // 0x2a3c14: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c10) {
            ctx->pc = 0x2A3C28u;
            goto label_2a3c28;
        }
    }
    ctx->pc = 0x2A3C18u;
label_2a3c18:
    // 0x2a3c18: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3c1c:
    if (ctx->pc == 0x2A3C1Cu) {
        ctx->pc = 0x2A3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C18u;
        // 0x2a3c1c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C20u;
        goto label_2a3c20;
    }
    ctx->pc = 0x2A3C18u;
    {
        const bool branch_taken_0x2a3c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C18u;
        // 0x2a3c1c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c18) {
            ctx->pc = 0x2A3C28u;
            goto label_2a3c28;
        }
    }
    ctx->pc = 0x2A3C20u;
label_2a3c20:
    // 0x2a3c20: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_2a3c24:
    // 0x2a3c24: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2a3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_2a3c28:
    // 0x2a3c28: 0xc0f5240  jal         func_3D4900
label_2a3c2c:
    if (ctx->pc == 0x2A3C2Cu) {
        ctx->pc = 0x2A3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C28u;
        // 0x2a3c2c: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C30u;
        goto label_2a3c30;
    }
    ctx->pc = 0x2A3C28u;
    SET_GPR_U32(ctx, 31, 0x2A3C30u);
    ctx->pc = 0x2A3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C28u;
    // 0x2a3c2c: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A3C28u, 0x2A3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C30u;
label_2a3c30:
    // 0x2a3c30: 0xc0c7aa0  jal         func_31EA80
label_2a3c34:
    if (ctx->pc == 0x2A3C34u) {
        ctx->pc = 0x2A3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C30u;
        // 0x2a3c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C38u;
        goto label_2a3c38;
    }
    ctx->pc = 0x2A3C30u;
    SET_GPR_U32(ctx, 31, 0x2A3C38u);
    ctx->pc = 0x2A3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C30u;
    // 0x2a3c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA80u, 0x2A3C30u, 0x2A3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C38u;
label_2a3c38:
    // 0x2a3c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c3c:
    // 0x2a3c3c: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x2a3c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2a3c40:
    // 0x2a3c40: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2a3c44:
    // 0x2a3c44: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2a3c44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_2a3c48:
    // 0x2a3c48: 0x97a7006a  lhu         $a3, 0x6A($sp)
    ctx->pc = 0x2a3c48u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
label_2a3c4c:
    // 0x2a3c4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a3c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c50:
    // 0x2a3c50: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x2a3c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_2a3c54:
    // 0x2a3c54: 0xc0c7ac8  jal         func_31EB20
label_2a3c58:
    if (ctx->pc == 0x2A3C58u) {
        ctx->pc = 0x2A3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C54u;
        // 0x2a3c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C5Cu;
        goto label_2a3c5c;
    }
    ctx->pc = 0x2A3C54u;
    SET_GPR_U32(ctx, 31, 0x2A3C5Cu);
    ctx->pc = 0x2A3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C54u;
    // 0x2a3c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB20u, 0x2A3C54u, 0x2A3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C5Cu;
label_2a3c5c:
    // 0x2a3c5c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2a3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a3c60:
    // 0x2a3c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c64:
    // 0x2a3c64: 0xc0c7b98  jal         func_31EE60
label_2a3c68:
    if (ctx->pc == 0x2A3C68u) {
        ctx->pc = 0x2A3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C64u;
        // 0x2a3c68: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C6Cu;
        goto label_2a3c6c;
    }
    ctx->pc = 0x2A3C64u;
    SET_GPR_U32(ctx, 31, 0x2A3C6Cu);
    ctx->pc = 0x2A3C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C64u;
    // 0x2a3c68: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE60u, 0x2A3C64u, 0x2A3C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C6Cu;
label_2a3c6c:
    // 0x2a3c6c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2a3c70:
    // 0x2a3c70: 0xc0c7bee  jal         func_31EFB8
label_2a3c74:
    if (ctx->pc == 0x2A3C74u) {
        ctx->pc = 0x2A3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C70u;
        // 0x2a3c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C78u;
        goto label_2a3c78;
    }
    ctx->pc = 0x2A3C70u;
    SET_GPR_U32(ctx, 31, 0x2A3C78u);
    ctx->pc = 0x2A3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C70u;
    // 0x2a3c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EFB8u, 0x2A3C70u, 0x2A3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C78u;
label_2a3c78:
    // 0x2a3c78: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a3c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c7c:
    // 0x2a3c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c80:
    // 0x2a3c80: 0xc0c7bae  jal         func_31EEB8
label_2a3c84:
    if (ctx->pc == 0x2A3C84u) {
        ctx->pc = 0x2A3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C80u;
        // 0x2a3c84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C88u;
        goto label_2a3c88;
    }
    ctx->pc = 0x2A3C80u;
    SET_GPR_U32(ctx, 31, 0x2A3C88u);
    ctx->pc = 0x2A3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C80u;
    // 0x2a3c84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEB8u, 0x2A3C80u, 0x2A3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C88u;
label_2a3c88:
    // 0x2a3c88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2a3c8c:
    // 0x2a3c8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a3c90:
    if (ctx->pc == 0x2A3C90u) {
        ctx->pc = 0x2A3C94u;
        goto label_2a3c94;
    }
    ctx->pc = 0x2A3C8Cu;
    {
        const bool branch_taken_0x2a3c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3c8c) {
            ctx->pc = 0x2A3C9Cu;
            goto label_2a3c9c;
        }
    }
    ctx->pc = 0x2A3C94u;
label_2a3c94:
    // 0x2a3c94: 0xc0f528a  jal         func_3D4A28
label_2a3c98:
    if (ctx->pc == 0x2A3C98u) {
        ctx->pc = 0x2A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C94u;
        // 0x2a3c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3C9Cu;
        goto label_2a3c9c;
    }
    ctx->pc = 0x2A3C94u;
    SET_GPR_U32(ctx, 31, 0x2A3C9Cu);
    ctx->pc = 0x2A3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C94u;
    // 0x2a3c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2A3C94u, 0x2A3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C9Cu;
label_2a3c9c:
    // 0x2a3c9c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_2a3ca0:
    if (ctx->pc == 0x2A3CA0u) {
        ctx->pc = 0x2A3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C9Cu;
        // 0x2a3ca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CA4u;
        goto label_2a3ca4;
    }
    ctx->pc = 0x2A3C9Cu;
    {
        const bool branch_taken_0x2a3c9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C9Cu;
        // 0x2a3ca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c9c) {
            ctx->pc = 0x2A3CB0u;
            goto label_2a3cb0;
        }
    }
    ctx->pc = 0x2A3CA4u;
label_2a3ca4:
    // 0x2a3ca4: 0xc0f528a  jal         func_3D4A28
label_2a3ca8:
    if (ctx->pc == 0x2A3CA8u) {
        ctx->pc = 0x2A3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CA4u;
        // 0x2a3ca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CACu;
        goto label_2a3cac;
    }
    ctx->pc = 0x2A3CA4u;
    SET_GPR_U32(ctx, 31, 0x2A3CACu);
    ctx->pc = 0x2A3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CA4u;
    // 0x2a3ca8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2A3CA4u, 0x2A3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CACu;
label_2a3cac:
    // 0x2a3cac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a3cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cb0:
    // 0x2a3cb0: 0xc0d7412  jal         func_35D048
label_2a3cb4:
    if (ctx->pc == 0x2A3CB4u) {
        ctx->pc = 0x2A3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CB0u;
        // 0x2a3cb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CB8u;
        goto label_2a3cb8;
    }
    ctx->pc = 0x2A3CB0u;
    SET_GPR_U32(ctx, 31, 0x2A3CB8u);
    ctx->pc = 0x2A3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CB0u;
    // 0x2a3cb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A3CB0u, 0x2A3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CB8u;
label_2a3cb8:
    // 0x2a3cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3cbc:
    // 0x2a3cbc: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2a3cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a3cc0:
    // 0x2a3cc0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2a3cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_2a3cc4:
    // 0x2a3cc4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2a3cc8:
    // 0x2a3cc8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x2a3cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_2a3ccc:
    // 0x2a3ccc: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2a3cccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a3cd0:
    // 0x2a3cd0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x2a3cd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_2a3cd4:
    // 0x2a3cd4: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2a3cd8:
    // 0x2a3cd8: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x2a3cd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_2a3cdc:
    // 0x2a3cdc: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x2a3cdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2a3ce0:
    // 0x2a3ce0: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x2a3ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_2a3ce4:
    // 0x2a3ce4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2a3ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a3ce8:
    // 0x2a3ce8: 0x3e00008  jr          $ra
label_2a3cec:
    if (ctx->pc == 0x2A3CECu) {
        ctx->pc = 0x2A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CE8u;
        // 0x2a3cec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3CF0u;
        goto label_fallthrough_0x2a3ce8;
    }
    ctx->pc = 0x2A3CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CE8u;
        // 0x2a3cec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3ce8:
    ctx->pc = 0x2A3CF0u;
}
