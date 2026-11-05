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

// Function: sub_00188908
// Address: 0x188908 - 0x188b98
void sub_00188908_0x188908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188908_0x188908");
#endif

    switch (ctx->pc) {
        case 0x188908u: goto label_188908;
        case 0x18890cu: goto label_18890c;
        case 0x188910u: goto label_188910;
        case 0x188914u: goto label_188914;
        case 0x188918u: goto label_188918;
        case 0x18891cu: goto label_18891c;
        case 0x188920u: goto label_188920;
        case 0x188924u: goto label_188924;
        case 0x188928u: goto label_188928;
        case 0x18892cu: goto label_18892c;
        case 0x188930u: goto label_188930;
        case 0x188934u: goto label_188934;
        case 0x188938u: goto label_188938;
        case 0x18893cu: goto label_18893c;
        case 0x188940u: goto label_188940;
        case 0x188944u: goto label_188944;
        case 0x188948u: goto label_188948;
        case 0x18894cu: goto label_18894c;
        case 0x188950u: goto label_188950;
        case 0x188954u: goto label_188954;
        case 0x188958u: goto label_188958;
        case 0x18895cu: goto label_18895c;
        case 0x188960u: goto label_188960;
        case 0x188964u: goto label_188964;
        case 0x188968u: goto label_188968;
        case 0x18896cu: goto label_18896c;
        case 0x188970u: goto label_188970;
        case 0x188974u: goto label_188974;
        case 0x188978u: goto label_188978;
        case 0x18897cu: goto label_18897c;
        case 0x188980u: goto label_188980;
        case 0x188984u: goto label_188984;
        case 0x188988u: goto label_188988;
        case 0x18898cu: goto label_18898c;
        case 0x188990u: goto label_188990;
        case 0x188994u: goto label_188994;
        case 0x188998u: goto label_188998;
        case 0x18899cu: goto label_18899c;
        case 0x1889a0u: goto label_1889a0;
        case 0x1889a4u: goto label_1889a4;
        case 0x1889a8u: goto label_1889a8;
        case 0x1889acu: goto label_1889ac;
        case 0x1889b0u: goto label_1889b0;
        case 0x1889b4u: goto label_1889b4;
        case 0x1889b8u: goto label_1889b8;
        case 0x1889bcu: goto label_1889bc;
        case 0x1889c0u: goto label_1889c0;
        case 0x1889c4u: goto label_1889c4;
        case 0x1889c8u: goto label_1889c8;
        case 0x1889ccu: goto label_1889cc;
        case 0x1889d0u: goto label_1889d0;
        case 0x1889d4u: goto label_1889d4;
        case 0x1889d8u: goto label_1889d8;
        case 0x1889dcu: goto label_1889dc;
        case 0x1889e0u: goto label_1889e0;
        case 0x1889e4u: goto label_1889e4;
        case 0x1889e8u: goto label_1889e8;
        case 0x1889ecu: goto label_1889ec;
        case 0x1889f0u: goto label_1889f0;
        case 0x1889f4u: goto label_1889f4;
        case 0x1889f8u: goto label_1889f8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a00u: goto label_188a00;
        case 0x188a04u: goto label_188a04;
        case 0x188a08u: goto label_188a08;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a10u: goto label_188a10;
        case 0x188a14u: goto label_188a14;
        case 0x188a18u: goto label_188a18;
        case 0x188a1cu: goto label_188a1c;
        case 0x188a20u: goto label_188a20;
        case 0x188a24u: goto label_188a24;
        case 0x188a28u: goto label_188a28;
        case 0x188a2cu: goto label_188a2c;
        case 0x188a30u: goto label_188a30;
        case 0x188a34u: goto label_188a34;
        case 0x188a38u: goto label_188a38;
        case 0x188a3cu: goto label_188a3c;
        case 0x188a40u: goto label_188a40;
        case 0x188a44u: goto label_188a44;
        case 0x188a48u: goto label_188a48;
        case 0x188a4cu: goto label_188a4c;
        case 0x188a50u: goto label_188a50;
        case 0x188a54u: goto label_188a54;
        case 0x188a58u: goto label_188a58;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a60u: goto label_188a60;
        case 0x188a64u: goto label_188a64;
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        case 0x188a78u: goto label_188a78;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a80u: goto label_188a80;
        case 0x188a84u: goto label_188a84;
        case 0x188a88u: goto label_188a88;
        case 0x188a8cu: goto label_188a8c;
        case 0x188a90u: goto label_188a90;
        case 0x188a94u: goto label_188a94;
        case 0x188a98u: goto label_188a98;
        case 0x188a9cu: goto label_188a9c;
        case 0x188aa0u: goto label_188aa0;
        case 0x188aa4u: goto label_188aa4;
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        case 0x188ad8u: goto label_188ad8;
        case 0x188adcu: goto label_188adc;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae4u: goto label_188ae4;
        case 0x188ae8u: goto label_188ae8;
        case 0x188aecu: goto label_188aec;
        case 0x188af0u: goto label_188af0;
        case 0x188af4u: goto label_188af4;
        case 0x188af8u: goto label_188af8;
        case 0x188afcu: goto label_188afc;
        case 0x188b00u: goto label_188b00;
        case 0x188b04u: goto label_188b04;
        case 0x188b08u: goto label_188b08;
        case 0x188b0cu: goto label_188b0c;
        case 0x188b10u: goto label_188b10;
        case 0x188b14u: goto label_188b14;
        case 0x188b18u: goto label_188b18;
        case 0x188b1cu: goto label_188b1c;
        case 0x188b20u: goto label_188b20;
        case 0x188b24u: goto label_188b24;
        case 0x188b28u: goto label_188b28;
        case 0x188b2cu: goto label_188b2c;
        case 0x188b30u: goto label_188b30;
        case 0x188b34u: goto label_188b34;
        case 0x188b38u: goto label_188b38;
        case 0x188b3cu: goto label_188b3c;
        case 0x188b40u: goto label_188b40;
        case 0x188b44u: goto label_188b44;
        case 0x188b48u: goto label_188b48;
        case 0x188b4cu: goto label_188b4c;
        case 0x188b50u: goto label_188b50;
        case 0x188b54u: goto label_188b54;
        case 0x188b58u: goto label_188b58;
        case 0x188b5cu: goto label_188b5c;
        case 0x188b60u: goto label_188b60;
        case 0x188b64u: goto label_188b64;
        case 0x188b68u: goto label_188b68;
        case 0x188b6cu: goto label_188b6c;
        case 0x188b70u: goto label_188b70;
        case 0x188b74u: goto label_188b74;
        case 0x188b78u: goto label_188b78;
        case 0x188b7cu: goto label_188b7c;
        case 0x188b80u: goto label_188b80;
        case 0x188b84u: goto label_188b84;
        case 0x188b88u: goto label_188b88;
        case 0x188b8cu: goto label_188b8c;
        case 0x188b90u: goto label_188b90;
        case 0x188b94u: goto label_188b94;
        default: break;
    }

    ctx->pc = 0x188908u;

label_188908:
    // 0x188908: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x188908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_18890c:
    // 0x18890c: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x18890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
label_188910:
    // 0x188910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188914:
    // 0x188914: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x188914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_188918:
    // 0x188918: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x188918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
label_18891c:
    // 0x18891c: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x18891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
label_188920:
    // 0x188920: 0xc061a1e  jal         func_186878
label_188924:
    if (ctx->pc == 0x188924u) {
        ctx->pc = 0x188924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188920u;
        // 0x188924: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188928u;
        goto label_188928;
    }
    ctx->pc = 0x188920u;
    SET_GPR_U32(ctx, 31, 0x188928u);
    ctx->pc = 0x188924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188920u;
    // 0x188924: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x188920u, 0x188928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188928u;
label_188928:
    // 0x188928: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x188928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_18892c:
    // 0x18892c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18892cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188930:
    // 0x188930: 0xc061a12  jal         func_186848
label_188934:
    if (ctx->pc == 0x188934u) {
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0xae200140  sw          $zero, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188938u;
        goto label_188938;
    }
    ctx->pc = 0x188930u;
    SET_GPR_U32(ctx, 31, 0x188938u);
    ctx->pc = 0x188934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188930u;
    // 0x188934: 0xae200140  sw          $zero, 0x140($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188930u, 0x188938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188938u;
label_188938:
    // 0x188938: 0xc44001e4  lwc1        $f0, 0x1E4($v0)
    ctx->pc = 0x188938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18893c:
    // 0x18893c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188940:
    // 0x188940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188944:
    // 0x188944: 0xc062d60  jal         func_18B580
label_188948:
    if (ctx->pc == 0x188948u) {
        ctx->pc = 0x188948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188944u;
        // 0x188948: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18894Cu;
        goto label_18894c;
    }
    ctx->pc = 0x188944u;
    SET_GPR_U32(ctx, 31, 0x18894Cu);
    ctx->pc = 0x188948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188944u;
    // 0x188948: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B580u, 0x188944u, 0x18894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18894Cu;
label_18894c:
    // 0x18894c: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_188950:
    if (ctx->pc == 0x188950u) {
        ctx->pc = 0x188950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18894Cu;
        // 0x188950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188954u;
        goto label_188954;
    }
    ctx->pc = 0x18894Cu;
    {
        const bool branch_taken_0x18894c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18894Cu;
        // 0x188950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18894c) {
            ctx->pc = 0x188B40u;
            goto label_188b40;
        }
    }
    ctx->pc = 0x188954u;
label_188954:
    // 0x188954: 0xc061a12  jal         func_186848
label_188958:
    if (ctx->pc == 0x188958u) {
        ctx->pc = 0x188958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188954u;
        // 0x188958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18895Cu;
        goto label_18895c;
    }
    ctx->pc = 0x188954u;
    SET_GPR_U32(ctx, 31, 0x18895Cu);
    ctx->pc = 0x188958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188954u;
    // 0x188958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188954u, 0x18895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18895Cu;
label_18895c:
    // 0x18895c: 0xc070116  jal         func_1C0458
label_188960:
    if (ctx->pc == 0x188960u) {
        ctx->pc = 0x188960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18895Cu;
        // 0x188960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188964u;
        goto label_188964;
    }
    ctx->pc = 0x18895Cu;
    SET_GPR_U32(ctx, 31, 0x188964u);
    ctx->pc = 0x188960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18895Cu;
    // 0x188960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0458u, 0x18895Cu, 0x188964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188964u;
label_188964:
    // 0x188964: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_188968:
    if (ctx->pc == 0x188968u) {
        ctx->pc = 0x188968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188964u;
        // 0x188968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18896Cu;
        goto label_18896c;
    }
    ctx->pc = 0x188964u;
    {
        const bool branch_taken_0x188964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188964u;
        // 0x188968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188964) {
            ctx->pc = 0x188B40u;
            goto label_188b40;
        }
    }
    ctx->pc = 0x18896Cu;
label_18896c:
    // 0x18896c: 0xc061a12  jal         func_186848
label_188970:
    if (ctx->pc == 0x188970u) {
        ctx->pc = 0x188970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18896Cu;
        // 0x188970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188974u;
        goto label_188974;
    }
    ctx->pc = 0x18896Cu;
    SET_GPR_U32(ctx, 31, 0x188974u);
    ctx->pc = 0x188970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18896Cu;
    // 0x188970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18896Cu, 0x188974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188974u;
label_188974:
    // 0x188974: 0x8c4304b4  lw          $v1, 0x4B4($v0)
    ctx->pc = 0x188974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1204)));
label_188978:
    // 0x188978: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x188978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_18897c:
    // 0x18897c: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
label_188980:
    if (ctx->pc == 0x188980u) {
        ctx->pc = 0x188980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18897Cu;
        // 0x188980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188984u;
        goto label_188984;
    }
    ctx->pc = 0x18897Cu;
    {
        const bool branch_taken_0x18897c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18897Cu;
        // 0x188980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18897c) {
            ctx->pc = 0x188B40u;
            goto label_188b40;
        }
    }
    ctx->pc = 0x188984u;
label_188984:
    // 0x188984: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_188988:
    // 0x188988: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x188988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_18898c:
    // 0x18898c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_188990:
    // 0x188990: 0x2463ffcf  addiu       $v1, $v1, -0x31
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_188994:
    // 0x188994: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x188994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_188998:
    // 0x188998: 0x54600069  bnel        $v1, $zero, . + 4 + (0x69 << 2)
label_18899c:
    if (ctx->pc == 0x18899Cu) {
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889A0u;
        goto label_1889a0;
    }
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188998) {
            ctx->pc = 0x18899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188998u;
            // 0x18899c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B40u;
            goto label_188b40;
        }
    }
    ctx->pc = 0x1889A0u;
label_1889a0:
    // 0x1889a0: 0xc061a12  jal         func_186848
label_1889a4:
    if (ctx->pc == 0x1889A4u) {
        ctx->pc = 0x1889A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A0u;
        // 0x1889a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889A8u;
        goto label_1889a8;
    }
    ctx->pc = 0x1889A0u;
    SET_GPR_U32(ctx, 31, 0x1889A8u);
    ctx->pc = 0x1889A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889A0u;
    // 0x1889a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1889A0u, 0x1889A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1889a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1889ac:
    // 0x1889ac: 0xc0707ac  jal         func_1C1EB0
label_1889b0:
    if (ctx->pc == 0x1889B0u) {
        ctx->pc = 0x1889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ACu;
        // 0x1889b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889B4u;
        goto label_1889b4;
    }
    ctx->pc = 0x1889ACu;
    SET_GPR_U32(ctx, 31, 0x1889B4u);
    ctx->pc = 0x1889B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889ACu;
    // 0x1889b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EB0u, 0x1889ACu, 0x1889B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889B4u;
label_1889b4:
    // 0x1889b4: 0xc061a12  jal         func_186848
label_1889b8:
    if (ctx->pc == 0x1889B8u) {
        ctx->pc = 0x1889B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889B4u;
        // 0x1889b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889BCu;
        goto label_1889bc;
    }
    ctx->pc = 0x1889B4u;
    SET_GPR_U32(ctx, 31, 0x1889BCu);
    ctx->pc = 0x1889B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889B4u;
    // 0x1889b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1889B4u, 0x1889BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889BCu;
label_1889bc:
    // 0x1889bc: 0x8c4302a0  lw          $v1, 0x2A0($v0)
    ctx->pc = 0x1889bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
label_1889c0:
    // 0x1889c0: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_1889c4:
    if (ctx->pc == 0x1889C4u) {
        ctx->pc = 0x1889C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C0u;
        // 0x1889c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889C8u;
        goto label_1889c8;
    }
    ctx->pc = 0x1889C0u;
    {
        const bool branch_taken_0x1889c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C0u;
        // 0x1889c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889c0) {
            ctx->pc = 0x188B40u;
            goto label_188b40;
        }
    }
    ctx->pc = 0x1889C8u;
label_1889c8:
    // 0x1889c8: 0xc061a12  jal         func_186848
label_1889cc:
    if (ctx->pc == 0x1889CCu) {
        ctx->pc = 0x1889CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C8u;
        // 0x1889cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889D0u;
        goto label_1889d0;
    }
    ctx->pc = 0x1889C8u;
    SET_GPR_U32(ctx, 31, 0x1889D0u);
    ctx->pc = 0x1889CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889C8u;
    // 0x1889cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1889C8u, 0x1889D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889D0u;
label_1889d0:
    // 0x1889d0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1889d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1889d4:
    // 0x1889d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1889d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1889d8:
    // 0x1889d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1889d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1889dc:
    // 0x1889dc: 0x40f809  jalr        $v0
label_1889e0:
    if (ctx->pc == 0x1889E0u) {
        ctx->pc = 0x1889E4u;
        goto label_1889e4;
    }
    ctx->pc = 0x1889DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1889E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889DCu, 0x1889E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1889E4u;
label_1889e4:
    // 0x1889e4: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
label_1889e8:
    if (ctx->pc == 0x1889E8u) {
        ctx->pc = 0x1889E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889E4u;
        // 0x1889e8: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889ECu;
        goto label_1889ec;
    }
    ctx->pc = 0x1889E4u;
    {
        const bool branch_taken_0x1889e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889e4) {
            ctx->pc = 0x1889E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1889E4u;
            // 0x1889e8: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B80u;
            goto label_188b80;
        }
    }
    ctx->pc = 0x1889ECu;
label_1889ec:
    // 0x1889ec: 0xc061a12  jal         func_186848
label_1889f0:
    if (ctx->pc == 0x1889F0u) {
        ctx->pc = 0x1889F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ECu;
        // 0x1889f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889F4u;
        goto label_1889f4;
    }
    ctx->pc = 0x1889ECu;
    SET_GPR_U32(ctx, 31, 0x1889F4u);
    ctx->pc = 0x1889F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1889ECu;
    // 0x1889f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1889ECu, 0x1889F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889F4u;
label_1889f4:
    // 0x1889f4: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_1889f8:
    // 0x1889f8: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_1889fc:
    if (ctx->pc == 0x1889FCu) {
        ctx->pc = 0x188A00u;
        goto label_188a00;
    }
    ctx->pc = 0x1889F8u;
    {
        const bool branch_taken_0x1889f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889f8) {
            ctx->pc = 0x188B50u;
            goto label_188b50;
        }
    }
    ctx->pc = 0x188A00u;
label_188a00:
    // 0x188a00: 0xc061a12  jal         func_186848
label_188a04:
    if (ctx->pc == 0x188A04u) {
        ctx->pc = 0x188A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A00u;
        // 0x188a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A08u;
        goto label_188a08;
    }
    ctx->pc = 0x188A00u;
    SET_GPR_U32(ctx, 31, 0x188A08u);
    ctx->pc = 0x188A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A00u;
    // 0x188a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188A00u, 0x188A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A08u;
label_188a08:
    // 0x188a08: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_188a0c:
    // 0x188a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188a10:
    // 0x188a10: 0xc0f6a96  jal         func_3DAA58
label_188a14:
    if (ctx->pc == 0x188A14u) {
        ctx->pc = 0x188A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A10u;
        // 0x188a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A18u;
        goto label_188a18;
    }
    ctx->pc = 0x188A10u;
    SET_GPR_U32(ctx, 31, 0x188A18u);
    ctx->pc = 0x188A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A10u;
    // 0x188a14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x188A10u, 0x188A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A18u;
label_188a18:
    // 0x188a18: 0xc0f6a96  jal         func_3DAA58
label_188a1c:
    if (ctx->pc == 0x188A1Cu) {
        ctx->pc = 0x188A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A18u;
        // 0x188a1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A20u;
        goto label_188a20;
    }
    ctx->pc = 0x188A18u;
    SET_GPR_U32(ctx, 31, 0x188A20u);
    ctx->pc = 0x188A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A18u;
    // 0x188a1c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x188A18u, 0x188A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A20u;
label_188a20:
    // 0x188a20: 0x7a0301e0  lq          $v1, 0x1E0($s0)
    ctx->pc = 0x188a20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 480)));
label_188a24:
    // 0x188a24: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_188a28:
    // 0x188a28: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x188a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_188a2c:
    // 0x188a2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_188a30:
    // 0x188a30: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x188a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_188a34:
    // 0x188a34: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x188a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_188a38:
    // 0x188a38: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x188a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_188a3c:
    // 0x188a3c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x188a3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_188a40:
    // 0x188a40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x188a40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_188a44:
    // 0x188a44: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x188a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_188a48:
    // 0x188a48: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x188a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188a4c:
    // 0x188a4c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x188a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_188a50:
    // 0x188a50: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x188a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_188a54:
    // 0x188a54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x188a54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_188a58:
    // 0x188a58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x188a58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_188a5c:
    // 0x188a5c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x188a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_188a60:
    // 0x188a60: 0x0  nop
    ctx->pc = 0x188a60u;
    // NOP
label_188a64:
    // 0x188a64: 0x0  nop
    ctx->pc = 0x188a64u;
    // NOP
label_188a68:
    // 0x188a68: 0x46010084  c1          0x10084
    ctx->pc = 0x188a68u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_188a6c:
    // 0x188a6c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x188a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_188a70:
    // 0x188a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188a74:
    // 0x188a74: 0x0  nop
    ctx->pc = 0x188a74u;
    // NOP
label_188a78:
    // 0x188a78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x188a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188a7c:
    // 0x188a7c: 0x0  nop
    ctx->pc = 0x188a7cu;
    // NOP
label_188a80:
    // 0x188a80: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_188a84:
    if (ctx->pc == 0x188A84u) {
        ctx->pc = 0x188A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A80u;
        // 0x188a84: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A88u;
        goto label_188a88;
    }
    ctx->pc = 0x188A80u;
    {
        const bool branch_taken_0x188a80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A80u;
        // 0x188a84: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a80) {
            ctx->pc = 0x188AACu;
            goto label_188aac;
        }
    }
    ctx->pc = 0x188A88u;
label_188a88:
    // 0x188a88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_188a8c:
    // 0x188a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188a90:
    // 0x188a90: 0x0  nop
    ctx->pc = 0x188a90u;
    // NOP
label_188a94:
    // 0x188a94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x188a94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_188a98:
    // 0x188a98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x188a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_188a9c:
    // 0x188a9c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x188a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_188aa0:
    // 0x188aa0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x188aa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_188aa4:
    // 0x188aa4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x188aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_188aa8:
    // 0x188aa8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x188aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_188aac:
    // 0x188aac: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x188aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_188ab0:
    // 0x188ab0: 0xc07a8b2  jal         func_1EA2C8
label_188ab4:
    if (ctx->pc == 0x188AB4u) {
        ctx->pc = 0x188AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AB0u;
        // 0x188ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AB8u;
        goto label_188ab8;
    }
    ctx->pc = 0x188AB0u;
    SET_GPR_U32(ctx, 31, 0x188AB8u);
    ctx->pc = 0x188AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AB0u;
    // 0x188ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x188AB0u, 0x188AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AB8u;
label_188ab8:
    // 0x188ab8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x188ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_188abc:
    // 0x188abc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x188abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_188ac0:
    // 0x188ac0: 0xc460fd1c  lwc1        $f0, -0x2E4($v1)
    ctx->pc = 0x188ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188ac4:
    // 0x188ac4: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_188ac8:
    // 0x188ac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188acc:
    // 0x188acc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x188accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_188ad0:
    // 0x188ad0: 0xc077912  jal         func_1DE448
label_188ad4:
    if (ctx->pc == 0x188AD4u) {
        ctx->pc = 0x188AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD0u;
        // 0x188ad4: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AD8u;
        goto label_188ad8;
    }
    ctx->pc = 0x188AD0u;
    SET_GPR_U32(ctx, 31, 0x188AD8u);
    ctx->pc = 0x188AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AD0u;
    // 0x188ad4: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x188AD0u, 0x188AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AD8u;
label_188ad8:
    // 0x188ad8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_188adc:
    if (ctx->pc == 0x188ADCu) {
        ctx->pc = 0x188ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD8u;
        // 0x188adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AE0u;
        goto label_188ae0;
    }
    ctx->pc = 0x188AD8u;
    {
        const bool branch_taken_0x188ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD8u;
        // 0x188adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ad8) {
            ctx->pc = 0x188B50u;
            goto label_188b50;
        }
    }
    ctx->pc = 0x188AE0u;
label_188ae0:
    // 0x188ae0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x188ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_188ae4:
    // 0x188ae4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x188ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_188ae8:
    // 0x188ae8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x188ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_188aec:
    // 0x188aec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x188aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188af0:
    // 0x188af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188af4:
    // 0x188af4: 0x8c481004  lw          $t0, 0x1004($v0)
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_188af8:
    // 0x188af8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_188afc:
    // 0x188afc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_188b00:
    // 0x188b00: 0x8d020104  lw          $v0, 0x104($t0)
    ctx->pc = 0x188b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
label_188b04:
    // 0x188b04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188b08:
    // 0x188b08: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x188b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188b0c:
    // 0x188b0c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x188b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_188b10:
    // 0x188b10: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x188b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_188b14:
    // 0x188b14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x188b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188b18:
    // 0x188b18: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x188b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_188b1c:
    // 0x188b1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x188b1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_188b20:
    // 0x188b20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x188b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188b24:
    // 0x188b24: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x188b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_188b28:
    // 0x188b28: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x188b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188b2c:
    // 0x188b2c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x188b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_188b30:
    // 0x188b30: 0xc062e12  jal         func_18B848
label_188b34:
    if (ctx->pc == 0x188B34u) {
        ctx->pc = 0x188B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B30u;
        // 0x188b34: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B38u;
        goto label_188b38;
    }
    ctx->pc = 0x188B30u;
    SET_GPR_U32(ctx, 31, 0x188B38u);
    ctx->pc = 0x188B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B30u;
    // 0x188b34: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B848u, 0x188B30u, 0x188B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B38u;
label_188b38:
    // 0x188b38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_188b3c:
    if (ctx->pc == 0x188B3Cu) {
        ctx->pc = 0x188B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B38u;
        // 0x188b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B40u;
        goto label_188b40;
    }
    ctx->pc = 0x188B38u;
    {
        const bool branch_taken_0x188b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B38u;
        // 0x188b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b38) {
            ctx->pc = 0x188B50u;
            goto label_188b50;
        }
    }
    ctx->pc = 0x188B40u;
label_188b40:
    // 0x188b40: 0xc062974  jal         func_18A5D0
label_188b44:
    if (ctx->pc == 0x188B44u) {
        ctx->pc = 0x188B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B40u;
        // 0x188b44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B48u;
        goto label_188b48;
    }
    ctx->pc = 0x188B40u;
    SET_GPR_U32(ctx, 31, 0x188B48u);
    ctx->pc = 0x188B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B40u;
    // 0x188b44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x188B40u, 0x188B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B48u;
label_188b48:
    // 0x188b48: 0x1000000d  b           . + 4 + (0xD << 2)
label_188b4c:
    if (ctx->pc == 0x188B4Cu) {
        ctx->pc = 0x188B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B48u;
        // 0x188b4c: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B50u;
        goto label_188b50;
    }
    ctx->pc = 0x188B48u;
    {
        const bool branch_taken_0x188b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B48u;
        // 0x188b4c: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b48) {
            ctx->pc = 0x188B80u;
            goto label_188b80;
        }
    }
    ctx->pc = 0x188B50u;
label_188b50:
    // 0x188b50: 0xc061a26  jal         func_186898
label_188b54:
    if (ctx->pc == 0x188B54u) {
        ctx->pc = 0x188B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B50u;
        // 0x188b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B58u;
        goto label_188b58;
    }
    ctx->pc = 0x188B50u;
    SET_GPR_U32(ctx, 31, 0x188B58u);
    ctx->pc = 0x188B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B50u;
    // 0x188b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x188B50u, 0x188B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B58u;
label_188b58:
    // 0x188b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188b5c:
    // 0x188b5c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_188b60:
    // 0x188b60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x188b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_188b64:
    // 0x188b64: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_188b68:
    if (ctx->pc == 0x188B68u) {
        ctx->pc = 0x188B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B64u;
        // 0x188b68: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B6Cu;
        goto label_188b6c;
    }
    ctx->pc = 0x188B64u;
    {
        const bool branch_taken_0x188b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B64u;
        // 0x188b68: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b64) {
            ctx->pc = 0x188B80u;
            goto label_188b80;
        }
    }
    ctx->pc = 0x188B6Cu;
label_188b6c:
    // 0x188b6c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x188b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_188b70:
    // 0x188b70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x188b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_188b74:
    // 0x188b74: 0xc0622e6  jal         func_188B98
label_188b78:
    if (ctx->pc == 0x188B78u) {
        ctx->pc = 0x188B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B74u;
        // 0x188b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B7Cu;
        goto label_188b7c;
    }
    ctx->pc = 0x188B74u;
    SET_GPR_U32(ctx, 31, 0x188B7Cu);
    ctx->pc = 0x188B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B74u;
    // 0x188b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188B98u, 0x188B74u, 0x188B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B7Cu;
label_188b7c:
    // 0x188b7c: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x188b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_188b80:
    // 0x188b80: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x188b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_188b84:
    // 0x188b84: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x188b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_188b88:
    // 0x188b88: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x188b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_188b8c:
    // 0x188b8c: 0x3e00008  jr          $ra
label_188b90:
    if (ctx->pc == 0x188B90u) {
        ctx->pc = 0x188B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B8Cu;
        // 0x188b90: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B94u;
        goto label_188b94;
    }
    ctx->pc = 0x188B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B8Cu;
        // 0x188b90: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188B94u;
label_188b94:
    // 0x188b94: 0x0  nop
    ctx->pc = 0x188b94u;
    // NOP
    ctx->pc = 0x188b98u;
}
