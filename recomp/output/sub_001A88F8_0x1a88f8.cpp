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

// Function: sub_001A88F8
// Address: 0x1a88f8 - 0x1a8ca0
void sub_001A88F8_0x1a88f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A88F8_0x1a88f8");
#endif

    switch (ctx->pc) {
        case 0x1a88f8u: goto label_1a88f8;
        case 0x1a88fcu: goto label_1a88fc;
        case 0x1a8900u: goto label_1a8900;
        case 0x1a8904u: goto label_1a8904;
        case 0x1a8908u: goto label_1a8908;
        case 0x1a890cu: goto label_1a890c;
        case 0x1a8910u: goto label_1a8910;
        case 0x1a8914u: goto label_1a8914;
        case 0x1a8918u: goto label_1a8918;
        case 0x1a891cu: goto label_1a891c;
        case 0x1a8920u: goto label_1a8920;
        case 0x1a8924u: goto label_1a8924;
        case 0x1a8928u: goto label_1a8928;
        case 0x1a892cu: goto label_1a892c;
        case 0x1a8930u: goto label_1a8930;
        case 0x1a8934u: goto label_1a8934;
        case 0x1a8938u: goto label_1a8938;
        case 0x1a893cu: goto label_1a893c;
        case 0x1a8940u: goto label_1a8940;
        case 0x1a8944u: goto label_1a8944;
        case 0x1a8948u: goto label_1a8948;
        case 0x1a894cu: goto label_1a894c;
        case 0x1a8950u: goto label_1a8950;
        case 0x1a8954u: goto label_1a8954;
        case 0x1a8958u: goto label_1a8958;
        case 0x1a895cu: goto label_1a895c;
        case 0x1a8960u: goto label_1a8960;
        case 0x1a8964u: goto label_1a8964;
        case 0x1a8968u: goto label_1a8968;
        case 0x1a896cu: goto label_1a896c;
        case 0x1a8970u: goto label_1a8970;
        case 0x1a8974u: goto label_1a8974;
        case 0x1a8978u: goto label_1a8978;
        case 0x1a897cu: goto label_1a897c;
        case 0x1a8980u: goto label_1a8980;
        case 0x1a8984u: goto label_1a8984;
        case 0x1a8988u: goto label_1a8988;
        case 0x1a898cu: goto label_1a898c;
        case 0x1a8990u: goto label_1a8990;
        case 0x1a8994u: goto label_1a8994;
        case 0x1a8998u: goto label_1a8998;
        case 0x1a899cu: goto label_1a899c;
        case 0x1a89a0u: goto label_1a89a0;
        case 0x1a89a4u: goto label_1a89a4;
        case 0x1a89a8u: goto label_1a89a8;
        case 0x1a89acu: goto label_1a89ac;
        case 0x1a89b0u: goto label_1a89b0;
        case 0x1a89b4u: goto label_1a89b4;
        case 0x1a89b8u: goto label_1a89b8;
        case 0x1a89bcu: goto label_1a89bc;
        case 0x1a89c0u: goto label_1a89c0;
        case 0x1a89c4u: goto label_1a89c4;
        case 0x1a89c8u: goto label_1a89c8;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a89d0u: goto label_1a89d0;
        case 0x1a89d4u: goto label_1a89d4;
        case 0x1a89d8u: goto label_1a89d8;
        case 0x1a89dcu: goto label_1a89dc;
        case 0x1a89e0u: goto label_1a89e0;
        case 0x1a89e4u: goto label_1a89e4;
        case 0x1a89e8u: goto label_1a89e8;
        case 0x1a89ecu: goto label_1a89ec;
        case 0x1a89f0u: goto label_1a89f0;
        case 0x1a89f4u: goto label_1a89f4;
        case 0x1a89f8u: goto label_1a89f8;
        case 0x1a89fcu: goto label_1a89fc;
        case 0x1a8a00u: goto label_1a8a00;
        case 0x1a8a04u: goto label_1a8a04;
        case 0x1a8a08u: goto label_1a8a08;
        case 0x1a8a0cu: goto label_1a8a0c;
        case 0x1a8a10u: goto label_1a8a10;
        case 0x1a8a14u: goto label_1a8a14;
        case 0x1a8a18u: goto label_1a8a18;
        case 0x1a8a1cu: goto label_1a8a1c;
        case 0x1a8a20u: goto label_1a8a20;
        case 0x1a8a24u: goto label_1a8a24;
        case 0x1a8a28u: goto label_1a8a28;
        case 0x1a8a2cu: goto label_1a8a2c;
        case 0x1a8a30u: goto label_1a8a30;
        case 0x1a8a34u: goto label_1a8a34;
        case 0x1a8a38u: goto label_1a8a38;
        case 0x1a8a3cu: goto label_1a8a3c;
        case 0x1a8a40u: goto label_1a8a40;
        case 0x1a8a44u: goto label_1a8a44;
        case 0x1a8a48u: goto label_1a8a48;
        case 0x1a8a4cu: goto label_1a8a4c;
        case 0x1a8a50u: goto label_1a8a50;
        case 0x1a8a54u: goto label_1a8a54;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a5cu: goto label_1a8a5c;
        case 0x1a8a60u: goto label_1a8a60;
        case 0x1a8a64u: goto label_1a8a64;
        case 0x1a8a68u: goto label_1a8a68;
        case 0x1a8a6cu: goto label_1a8a6c;
        case 0x1a8a70u: goto label_1a8a70;
        case 0x1a8a74u: goto label_1a8a74;
        case 0x1a8a78u: goto label_1a8a78;
        case 0x1a8a7cu: goto label_1a8a7c;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8a84u: goto label_1a8a84;
        case 0x1a8a88u: goto label_1a8a88;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a90u: goto label_1a8a90;
        case 0x1a8a94u: goto label_1a8a94;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8aa0u: goto label_1a8aa0;
        case 0x1a8aa4u: goto label_1a8aa4;
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8ab0u: goto label_1a8ab0;
        case 0x1a8ab4u: goto label_1a8ab4;
        case 0x1a8ab8u: goto label_1a8ab8;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ac0u: goto label_1a8ac0;
        case 0x1a8ac4u: goto label_1a8ac4;
        case 0x1a8ac8u: goto label_1a8ac8;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8ad0u: goto label_1a8ad0;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8ad8u: goto label_1a8ad8;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8ae0u: goto label_1a8ae0;
        case 0x1a8ae4u: goto label_1a8ae4;
        case 0x1a8ae8u: goto label_1a8ae8;
        case 0x1a8aecu: goto label_1a8aec;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8af4u: goto label_1a8af4;
        case 0x1a8af8u: goto label_1a8af8;
        case 0x1a8afcu: goto label_1a8afc;
        case 0x1a8b00u: goto label_1a8b00;
        case 0x1a8b04u: goto label_1a8b04;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b0cu: goto label_1a8b0c;
        case 0x1a8b10u: goto label_1a8b10;
        case 0x1a8b14u: goto label_1a8b14;
        case 0x1a8b18u: goto label_1a8b18;
        case 0x1a8b1cu: goto label_1a8b1c;
        case 0x1a8b20u: goto label_1a8b20;
        case 0x1a8b24u: goto label_1a8b24;
        case 0x1a8b28u: goto label_1a8b28;
        case 0x1a8b2cu: goto label_1a8b2c;
        case 0x1a8b30u: goto label_1a8b30;
        case 0x1a8b34u: goto label_1a8b34;
        case 0x1a8b38u: goto label_1a8b38;
        case 0x1a8b3cu: goto label_1a8b3c;
        case 0x1a8b40u: goto label_1a8b40;
        case 0x1a8b44u: goto label_1a8b44;
        case 0x1a8b48u: goto label_1a8b48;
        case 0x1a8b4cu: goto label_1a8b4c;
        case 0x1a8b50u: goto label_1a8b50;
        case 0x1a8b54u: goto label_1a8b54;
        case 0x1a8b58u: goto label_1a8b58;
        case 0x1a8b5cu: goto label_1a8b5c;
        case 0x1a8b60u: goto label_1a8b60;
        case 0x1a8b64u: goto label_1a8b64;
        case 0x1a8b68u: goto label_1a8b68;
        case 0x1a8b6cu: goto label_1a8b6c;
        case 0x1a8b70u: goto label_1a8b70;
        case 0x1a8b74u: goto label_1a8b74;
        case 0x1a8b78u: goto label_1a8b78;
        case 0x1a8b7cu: goto label_1a8b7c;
        case 0x1a8b80u: goto label_1a8b80;
        case 0x1a8b84u: goto label_1a8b84;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b8cu: goto label_1a8b8c;
        case 0x1a8b90u: goto label_1a8b90;
        case 0x1a8b94u: goto label_1a8b94;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8b9cu: goto label_1a8b9c;
        case 0x1a8ba0u: goto label_1a8ba0;
        case 0x1a8ba4u: goto label_1a8ba4;
        case 0x1a8ba8u: goto label_1a8ba8;
        case 0x1a8bacu: goto label_1a8bac;
        case 0x1a8bb0u: goto label_1a8bb0;
        case 0x1a8bb4u: goto label_1a8bb4;
        case 0x1a8bb8u: goto label_1a8bb8;
        case 0x1a8bbcu: goto label_1a8bbc;
        case 0x1a8bc0u: goto label_1a8bc0;
        case 0x1a8bc4u: goto label_1a8bc4;
        case 0x1a8bc8u: goto label_1a8bc8;
        case 0x1a8bccu: goto label_1a8bcc;
        case 0x1a8bd0u: goto label_1a8bd0;
        case 0x1a8bd4u: goto label_1a8bd4;
        case 0x1a8bd8u: goto label_1a8bd8;
        case 0x1a8bdcu: goto label_1a8bdc;
        case 0x1a8be0u: goto label_1a8be0;
        case 0x1a8be4u: goto label_1a8be4;
        case 0x1a8be8u: goto label_1a8be8;
        case 0x1a8becu: goto label_1a8bec;
        case 0x1a8bf0u: goto label_1a8bf0;
        case 0x1a8bf4u: goto label_1a8bf4;
        case 0x1a8bf8u: goto label_1a8bf8;
        case 0x1a8bfcu: goto label_1a8bfc;
        case 0x1a8c00u: goto label_1a8c00;
        case 0x1a8c04u: goto label_1a8c04;
        case 0x1a8c08u: goto label_1a8c08;
        case 0x1a8c0cu: goto label_1a8c0c;
        case 0x1a8c10u: goto label_1a8c10;
        case 0x1a8c14u: goto label_1a8c14;
        case 0x1a8c18u: goto label_1a8c18;
        case 0x1a8c1cu: goto label_1a8c1c;
        case 0x1a8c20u: goto label_1a8c20;
        case 0x1a8c24u: goto label_1a8c24;
        case 0x1a8c28u: goto label_1a8c28;
        case 0x1a8c2cu: goto label_1a8c2c;
        case 0x1a8c30u: goto label_1a8c30;
        case 0x1a8c34u: goto label_1a8c34;
        case 0x1a8c38u: goto label_1a8c38;
        case 0x1a8c3cu: goto label_1a8c3c;
        case 0x1a8c40u: goto label_1a8c40;
        case 0x1a8c44u: goto label_1a8c44;
        case 0x1a8c48u: goto label_1a8c48;
        case 0x1a8c4cu: goto label_1a8c4c;
        case 0x1a8c50u: goto label_1a8c50;
        case 0x1a8c54u: goto label_1a8c54;
        case 0x1a8c58u: goto label_1a8c58;
        case 0x1a8c5cu: goto label_1a8c5c;
        case 0x1a8c60u: goto label_1a8c60;
        case 0x1a8c64u: goto label_1a8c64;
        case 0x1a8c68u: goto label_1a8c68;
        case 0x1a8c6cu: goto label_1a8c6c;
        case 0x1a8c70u: goto label_1a8c70;
        case 0x1a8c74u: goto label_1a8c74;
        case 0x1a8c78u: goto label_1a8c78;
        case 0x1a8c7cu: goto label_1a8c7c;
        case 0x1a8c80u: goto label_1a8c80;
        case 0x1a8c84u: goto label_1a8c84;
        case 0x1a8c88u: goto label_1a8c88;
        case 0x1a8c8cu: goto label_1a8c8c;
        case 0x1a8c90u: goto label_1a8c90;
        case 0x1a8c94u: goto label_1a8c94;
        case 0x1a8c98u: goto label_1a8c98;
        case 0x1a8c9cu: goto label_1a8c9c;
        default: break;
    }

    ctx->pc = 0x1a88f8u;

label_1a88f8:
    // 0x1a88f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a88f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a88fc:
    // 0x1a88fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1a8900:
    // 0x1a8900: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a8904:
    // 0x1a8904: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a8908:
    // 0x1a8908: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a890c:
    // 0x1a890c: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1a890cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a8910:
    // 0x1a8910: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a8910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a8914:
    // 0x1a8914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8918:
    // 0x1a8918: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1a8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1a891c:
    // 0x1a891c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a891cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8920:
    // 0x1a8920: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a8920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1a8924:
    // 0x1a8924: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a8924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
label_1a8928:
    // 0x1a8928: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a8928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a892c:
    // 0x1a892c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1a892cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1a8930:
    // 0x1a8930: 0x8e44014c  lw          $a0, 0x14C($s2)
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1a8934:
    // 0x1a8934: 0x911818  mult        $v1, $a0, $s1
    ctx->pc = 0x1a8934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a8938:
    // 0x1a8938: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a8938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a893c:
    // 0x1a893c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a8940:
    // 0x1a8940: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1a8944:
    if (ctx->pc == 0x1A8944u) {
        ctx->pc = 0x1A8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8940u;
        // 0x1a8944: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8948u;
        goto label_1a8948;
    }
    ctx->pc = 0x1A8940u;
    {
        const bool branch_taken_0x1a8940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8940u;
        // 0x1a8944: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8940) {
            ctx->pc = 0x1A89BCu;
            goto label_1a89bc;
        }
    }
    ctx->pc = 0x1A8948u;
label_1a8948:
    // 0x1a8948: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1a8948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a894c:
    // 0x1a894c: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
label_1a8950:
    if (ctx->pc == 0x1A8950u) {
        ctx->pc = 0x1A8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A894Cu;
        // 0x1a8950: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8954u;
        goto label_1a8954;
    }
    ctx->pc = 0x1A894Cu;
    {
        const bool branch_taken_0x1a894c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A894Cu;
        // 0x1a8950: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a894c) {
            ctx->pc = 0x1A89BCu;
            goto label_1a89bc;
        }
    }
    ctx->pc = 0x1A8954u;
label_1a8954:
    // 0x1a8954: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1a8958:
    if (ctx->pc == 0x1A8958u) {
        ctx->pc = 0x1A8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8954u;
        // 0x1a8958: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A895Cu;
        goto label_1a895c;
    }
    ctx->pc = 0x1A8954u;
    {
        const bool branch_taken_0x1a8954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8954u;
        // 0x1a8958: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8954) {
            ctx->pc = 0x1A897Cu;
            goto label_1a897c;
        }
    }
    ctx->pc = 0x1A895Cu;
label_1a895c:
    // 0x1a895c: 0xc06b600  jal         func_1AD800
label_1a8960:
    if (ctx->pc == 0x1A8960u) {
        ctx->pc = 0x1A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A895Cu;
        // 0x1a8960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8964u;
        goto label_1a8964;
    }
    ctx->pc = 0x1A895Cu;
    SET_GPR_U32(ctx, 31, 0x1A8964u);
    ctx->pc = 0x1A8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A895Cu;
    // 0x1a8960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x1A895Cu, 0x1A8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8964u;
label_1a8964:
    // 0x1a8964: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a8968:
    if (ctx->pc == 0x1A8968u) {
        ctx->pc = 0x1A8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8964u;
        // 0x1a8968: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A896Cu;
        goto label_1a896c;
    }
    ctx->pc = 0x1A8964u;
    {
        const bool branch_taken_0x1a8964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8964u;
        // 0x1a8968: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8964) {
            ctx->pc = 0x1A89BCu;
            goto label_1a89bc;
        }
    }
    ctx->pc = 0x1A896Cu;
label_1a896c:
    // 0x1a896c: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1a896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a8970:
    // 0x1a8970: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1a8974:
    if (ctx->pc == 0x1A8974u) {
        ctx->pc = 0x1A8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8970u;
        // 0x1a8974: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8978u;
        goto label_1a8978;
    }
    ctx->pc = 0x1A8970u;
    {
        const bool branch_taken_0x1a8970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8970u;
        // 0x1a8974: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8970) {
            ctx->pc = 0x1A89BCu;
            goto label_1a89bc;
        }
    }
    ctx->pc = 0x1A8978u;
label_1a8978:
    // 0x1a8978: 0x8e44014c  lw          $a0, 0x14C($s2)
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1a897c:
    // 0x1a897c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1a8980:
    if (ctx->pc == 0x1A8980u) {
        ctx->pc = 0x1A8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A897Cu;
        // 0x1a8980: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8984u;
        goto label_1a8984;
    }
    ctx->pc = 0x1A897Cu;
    {
        const bool branch_taken_0x1a897c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A897Cu;
        // 0x1a8980: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a897c) {
            ctx->pc = 0x1A8990u;
            goto label_1a8990;
        }
    }
    ctx->pc = 0x1A8984u;
label_1a8984:
    // 0x1a8984: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x1a8984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_1a8988:
    // 0x1a8988: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a898c:
    if (ctx->pc == 0x1A898Cu) {
        ctx->pc = 0x1A898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8988u;
        // 0x1a898c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8990u;
        goto label_1a8990;
    }
    ctx->pc = 0x1A8988u;
    {
        const bool branch_taken_0x1a8988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8988u;
        // 0x1a898c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8988) {
            ctx->pc = 0x1A89BCu;
            goto label_1a89bc;
        }
    }
    ctx->pc = 0x1A8990u;
label_1a8990:
    // 0x1a8990: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1a8994:
    if (ctx->pc == 0x1A8994u) {
        ctx->pc = 0x1A8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8990u;
        // 0x1a8994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8998u;
        goto label_1a8998;
    }
    ctx->pc = 0x1A8990u;
    {
        const bool branch_taken_0x1a8990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8990u;
        // 0x1a8994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8990) {
            ctx->pc = 0x1A89B0u;
            goto label_1a89b0;
        }
    }
    ctx->pc = 0x1A8998u;
label_1a8998:
    // 0x1a8998: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x1a8998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1a899c:
    // 0x1a899c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1a899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1a89a0:
    // 0x1a89a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a89a4:
    // 0x1a89a4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1a89a8:
    if (ctx->pc == 0x1A89A8u) {
        ctx->pc = 0x1A89A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89A4u;
        // 0x1a89a8: 0x8e4501e8  lw          $a1, 0x1E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89ACu;
        goto label_1a89ac;
    }
    ctx->pc = 0x1A89A4u;
    {
        const bool branch_taken_0x1a89a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a89a4) {
            ctx->pc = 0x1A89A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89A4u;
            // 0x1a89a8: 0x8e4501e8  lw          $a1, 0x1E8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A89C0u;
            goto label_1a89c0;
        }
    }
    ctx->pc = 0x1A89ACu;
label_1a89ac:
    // 0x1a89ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a89b0:
    // 0x1a89b0: 0xae400164  sw          $zero, 0x164($s2)
    ctx->pc = 0x1a89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 0));
label_1a89b4:
    // 0x1a89b4: 0xae420160  sw          $v0, 0x160($s2)
    ctx->pc = 0x1a89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
label_1a89b8:
    // 0x1a89b8: 0xae400168  sw          $zero, 0x168($s2)
    ctx->pc = 0x1a89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 0));
label_1a89bc:
    // 0x1a89bc: 0x8e4501e8  lw          $a1, 0x1E8($s2)
    ctx->pc = 0x1a89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
label_1a89c0:
    // 0x1a89c0: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
label_1a89c4:
    if (ctx->pc == 0x1A89C4u) {
        ctx->pc = 0x1A89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89C0u;
        // 0x1a89c4: 0x8e420160  lw          $v0, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89C8u;
        goto label_1a89c8;
    }
    ctx->pc = 0x1A89C0u;
    {
        const bool branch_taken_0x1a89c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a89c0) {
            ctx->pc = 0x1A89C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89C0u;
            // 0x1a89c4: 0x8e420160  lw          $v0, 0x160($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A0Cu;
            goto label_1a8a0c;
        }
    }
    ctx->pc = 0x1A89C8u;
label_1a89c8:
    // 0x1a89c8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1a89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a89cc:
    // 0x1a89cc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1a89d0:
    // 0x1a89d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a89d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a89d4:
    // 0x1a89d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a89d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a89d8:
    // 0x1a89d8: 0x0  nop
    ctx->pc = 0x1a89d8u;
    // NOP
label_1a89dc:
    // 0x1a89dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a89dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a89e0:
    // 0x1a89e0: 0x0  nop
    ctx->pc = 0x1a89e0u;
    // NOP
label_1a89e4:
    // 0x1a89e4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1a89e8:
    if (ctx->pc == 0x1A89E8u) {
        ctx->pc = 0x1A89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89E4u;
        // 0x1a89e8: 0x8e420160  lw          $v0, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89ECu;
        goto label_1a89ec;
    }
    ctx->pc = 0x1A89E4u;
    {
        const bool branch_taken_0x1a89e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a89e4) {
            ctx->pc = 0x1A89E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89E4u;
            // 0x1a89e8: 0x8e420160  lw          $v0, 0x160($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A0Cu;
            goto label_1a8a0c;
        }
    }
    ctx->pc = 0x1A89ECu;
label_1a89ec:
    // 0x1a89ec: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1a89ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_1a89f0:
    // 0x1a89f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a89f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a89f4:
    // 0x1a89f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a89f8:
    if (ctx->pc == 0x1A89F8u) {
        ctx->pc = 0x1A89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89F4u;
        // 0x1a89f8: 0x8e420160  lw          $v0, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89FCu;
        goto label_1a89fc;
    }
    ctx->pc = 0x1A89F4u;
    {
        const bool branch_taken_0x1a89f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a89f4) {
            ctx->pc = 0x1A89F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89F4u;
            // 0x1a89f8: 0x8e420160  lw          $v0, 0x160($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A0Cu;
            goto label_1a8a0c;
        }
    }
    ctx->pc = 0x1A89FCu;
label_1a89fc:
    // 0x1a89fc: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x1a89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_1a8a00:
    // 0x1a8a00: 0xc07576c  jal         func_1D5DB0
label_1a8a04:
    if (ctx->pc == 0x1A8A04u) {
        ctx->pc = 0x1A8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A00u;
        // 0x1a8a04: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A08u;
        goto label_1a8a08;
    }
    ctx->pc = 0x1A8A00u;
    SET_GPR_U32(ctx, 31, 0x1A8A08u);
    ctx->pc = 0x1A8A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A00u;
    // 0x1a8a04: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DB0u, 0x1A8A00u, 0x1A8A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A08u;
label_1a8a08:
    // 0x1a8a08: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_1a8a0c:
    // 0x1a8a0c: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_1a8a10:
    if (ctx->pc == 0x1A8A10u) {
        ctx->pc = 0x1A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A0Cu;
        // 0x1a8a10: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A14u;
        goto label_1a8a14;
    }
    ctx->pc = 0x1A8A0Cu;
    {
        const bool branch_taken_0x1a8a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A0Cu;
        // 0x1a8a10: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a0c) {
            ctx->pc = 0x1A8C7Cu;
            goto label_1a8c7c;
        }
    }
    ctx->pc = 0x1A8A14u;
label_1a8a14:
    // 0x1a8a14: 0x8e440150  lw          $a0, 0x150($s2)
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a8a18:
    // 0x1a8a18: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1a8a1c:
    // 0x1a8a1c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_1a8a20:
    if (ctx->pc == 0x1A8A20u) {
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0xc6410168  lwc1        $f1, 0x168($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A24u;
        goto label_1a8a24;
    }
    ctx->pc = 0x1A8A1Cu;
    {
        const bool branch_taken_0x1a8a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8a1c) {
            ctx->pc = 0x1A8A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8A1Cu;
            // 0x1a8a20: 0xc6410168  lwc1        $f1, 0x168($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A34u;
            goto label_1a8a34;
        }
    }
    ctx->pc = 0x1A8A24u;
label_1a8a24:
    // 0x1a8a24: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1a8a28:
    // 0x1a8a28: 0x10820095  beq         $a0, $v0, . + 4 + (0x95 << 2)
label_1a8a2c:
    if (ctx->pc == 0x1A8A2Cu) {
        ctx->pc = 0x1A8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A28u;
        // 0x1a8a2c: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A30u;
        goto label_1a8a30;
    }
    ctx->pc = 0x1A8A28u;
    {
        const bool branch_taken_0x1a8a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A28u;
        // 0x1a8a2c: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a28) {
            ctx->pc = 0x1A8C80u;
            goto label_1a8c80;
        }
    }
    ctx->pc = 0x1A8A30u;
label_1a8a30:
    // 0x1a8a30: 0xc6410168  lwc1        $f1, 0x168($s2)
    ctx->pc = 0x1a8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8a34:
    // 0x1a8a34: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a8a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1a8a38:
    // 0x1a8a38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a8a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a8a3c:
    // 0x1a8a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8a40:
    // 0x1a8a40: 0x0  nop
    ctx->pc = 0x1a8a40u;
    // NOP
label_1a8a44:
    // 0x1a8a44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a8a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8a48:
    // 0x1a8a48: 0x0  nop
    ctx->pc = 0x1a8a48u;
    // NOP
label_1a8a4c:
    // 0x1a8a4c: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
label_1a8a50:
    if (ctx->pc == 0x1A8A50u) {
        ctx->pc = 0x1A8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A4Cu;
        // 0x1a8a50: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A54u;
        goto label_1a8a54;
    }
    ctx->pc = 0x1A8A4Cu;
    {
        const bool branch_taken_0x1a8a4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A4Cu;
        // 0x1a8a50: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a4c) {
            ctx->pc = 0x1A8C78u;
            goto label_1a8c78;
        }
    }
    ctx->pc = 0x1A8A54u;
label_1a8a54:
    // 0x1a8a54: 0x8e420158  lw          $v0, 0x158($s2)
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_1a8a58:
    // 0x1a8a58: 0x26836a00  addiu       $v1, $s4, 0x6A00
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 27136));
label_1a8a5c:
    // 0x1a8a5c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1a8a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a8a60:
    // 0x1a8a60: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1a8a64:
    // 0x1a8a64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a8a68:
    // 0x1a8a68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8a6c:
    // 0x1a8a6c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1a8a70:
    if (ctx->pc == 0x1A8A70u) {
        ctx->pc = 0x1A8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A6Cu;
        // 0x1a8a70: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A74u;
        goto label_1a8a74;
    }
    ctx->pc = 0x1A8A6Cu;
    {
        const bool branch_taken_0x1a8a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A6Cu;
        // 0x1a8a70: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a6c) {
            ctx->pc = 0x1A8AB8u;
            goto label_1a8ab8;
        }
    }
    ctx->pc = 0x1A8A74u;
label_1a8a74:
    // 0x1a8a74: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a8a78:
    // 0x1a8a78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8a7c:
    // 0x1a8a7c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1a8a80:
    if (ctx->pc == 0x1A8A80u) {
        ctx->pc = 0x1A8A84u;
        goto label_1a8a84;
    }
    ctx->pc = 0x1A8A7Cu;
    {
        const bool branch_taken_0x1a8a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8a7c) {
            ctx->pc = 0x1A8AB8u;
            goto label_1a8ab8;
        }
    }
    ctx->pc = 0x1A8A84u;
label_1a8a84:
    // 0x1a8a84: 0x265101ec  addiu       $s1, $s2, 0x1EC
    ctx->pc = 0x1a8a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
label_1a8a88:
    // 0x1a8a88: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1a8a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a8a8c:
    // 0x1a8a8c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a90:
    // 0x1a8a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8a94:
    // 0x1a8a94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8a98:
    if (ctx->pc == 0x1A8A98u) {
        ctx->pc = 0x1A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A94u;
        // 0x1a8a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A9Cu;
        goto label_1a8a9c;
    }
    ctx->pc = 0x1A8A94u;
    {
        const bool branch_taken_0x1a8a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A94u;
        // 0x1a8a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a94) {
            ctx->pc = 0x1A8AA8u;
            goto label_1a8aa8;
        }
    }
    ctx->pc = 0x1A8A9Cu;
label_1a8a9c:
    // 0x1a8a9c: 0xc06a1b0  jal         func_1A86C0
label_1a8aa0:
    if (ctx->pc == 0x1A8AA0u) {
        ctx->pc = 0x1A8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A9Cu;
        // 0x1a8aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AA4u;
        goto label_1a8aa4;
    }
    ctx->pc = 0x1A8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8AA4u);
    ctx->pc = 0x1A8AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A9Cu;
    // 0x1a8aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A8A9Cu, 0x1A8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8AA4u;
label_1a8aa4:
    // 0x1a8aa4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a8aa8:
    // 0x1a8aa8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a8aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1a8aac:
    // 0x1a8aac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1a8aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1a8ab0:
    // 0x1a8ab0: 0x661fff7  bgez        $s3, . + 4 + (-0x9 << 2)
label_1a8ab4:
    if (ctx->pc == 0x1A8AB4u) {
        ctx->pc = 0x1A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB0u;
        // 0x1a8ab4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AB8u;
        goto label_1a8ab8;
    }
    ctx->pc = 0x1A8AB0u;
    {
        const bool branch_taken_0x1a8ab0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB0u;
        // 0x1a8ab4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ab0) {
            ctx->pc = 0x1A8A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A8AB8u;
label_1a8ab8:
    // 0x1a8ab8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1a8abc:
    if (ctx->pc == 0x1A8ABCu) {
        ctx->pc = 0x1A8AC0u;
        goto label_1a8ac0;
    }
    ctx->pc = 0x1A8AB8u;
    {
        const bool branch_taken_0x1a8ab8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ab8) {
            ctx->pc = 0x1A8ACCu;
            goto label_1a8acc;
        }
    }
    ctx->pc = 0x1A8AC0u;
label_1a8ac0:
    // 0x1a8ac0: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1a8ac4:
    // 0x1a8ac4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a8ac8:
    if (ctx->pc == 0x1A8AC8u) {
        ctx->pc = 0x1A8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC4u;
        // 0x1a8ac8: 0xae420154  sw          $v0, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ACCu;
        goto label_1a8acc;
    }
    ctx->pc = 0x1A8AC4u;
    {
        const bool branch_taken_0x1a8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC4u;
        // 0x1a8ac8: 0xae420154  sw          $v0, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ac4) {
            ctx->pc = 0x1A8AD4u;
            goto label_1a8ad4;
        }
    }
    ctx->pc = 0x1A8ACCu;
label_1a8acc:
    // 0x1a8acc: 0xc06a38c  jal         func_1A8E30
label_1a8ad0:
    if (ctx->pc == 0x1A8AD0u) {
        ctx->pc = 0x1A8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ACCu;
        // 0x1a8ad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AD4u;
        goto label_1a8ad4;
    }
    ctx->pc = 0x1A8ACCu;
    SET_GPR_U32(ctx, 31, 0x1A8AD4u);
    ctx->pc = 0x1A8AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8ACCu;
    // 0x1a8ad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1A8ACCu, 0x1A8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8AD4u;
label_1a8ad4:
    // 0x1a8ad4: 0x8e460154  lw          $a2, 0x154($s2)
    ctx->pc = 0x1a8ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1a8ad8:
    // 0x1a8ad8: 0x8e450150  lw          $a1, 0x150($s2)
    ctx->pc = 0x1a8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a8adc:
    // 0x1a8adc: 0x10c50050  beq         $a2, $a1, . + 4 + (0x50 << 2)
label_1a8ae0:
    if (ctx->pc == 0x1A8AE0u) {
        ctx->pc = 0x1A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ADCu;
        // 0x1a8ae0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AE4u;
        goto label_1a8ae4;
    }
    ctx->pc = 0x1A8ADCu;
    {
        const bool branch_taken_0x1a8adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ADCu;
        // 0x1a8ae0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8adc) {
            ctx->pc = 0x1A8C20u;
            goto label_1a8c20;
        }
    }
    ctx->pc = 0x1A8AE4u;
label_1a8ae4:
    // 0x1a8ae4: 0x26836a00  addiu       $v1, $s4, 0x6A00
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 27136));
label_1a8ae8:
    // 0x1a8ae8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1a8ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a8aec:
    // 0x1a8aec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8af0:
    // 0x1a8af0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1a8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a8af4:
    // 0x1a8af4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a8af8:
    if (ctx->pc == 0x1A8AF8u) {
        ctx->pc = 0x1A8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF4u;
        // 0x1a8af8: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AFCu;
        goto label_1a8afc;
    }
    ctx->pc = 0x1A8AF4u;
    {
        const bool branch_taken_0x1a8af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF4u;
        // 0x1a8af8: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8af4) {
            ctx->pc = 0x1A8B18u;
            goto label_1a8b18;
        }
    }
    ctx->pc = 0x1A8AFCu;
label_1a8afc:
    // 0x1a8afc: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
label_1a8b00:
    if (ctx->pc == 0x1A8B00u) {
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B04u;
        goto label_1a8b04;
    }
    ctx->pc = 0x1A8AFCu;
    {
        const bool branch_taken_0x1a8afc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8afc) {
            ctx->pc = 0x1A8B18u;
            goto label_1a8b18;
        }
    }
    ctx->pc = 0x1A8B04u;
label_1a8b04:
    // 0x1a8b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8b08:
    // 0x1a8b08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a8b0c:
    // 0x1a8b0c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1a8b10:
    // 0x1a8b10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8b14:
    // 0x1a8b14: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a8b18:
    // 0x1a8b18: 0x8e4201e8  lw          $v0, 0x1E8($s2)
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
label_1a8b1c:
    // 0x1a8b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8b20:
    if (ctx->pc == 0x1A8B20u) {
        ctx->pc = 0x1A8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B1Cu;
        // 0x1a8b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B24u;
        goto label_1a8b24;
    }
    ctx->pc = 0x1A8B1Cu;
    {
        const bool branch_taken_0x1a8b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B1Cu;
        // 0x1a8b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b1c) {
            ctx->pc = 0x1A8B2Cu;
            goto label_1a8b2c;
        }
    }
    ctx->pc = 0x1A8B24u;
label_1a8b24:
    // 0x1a8b24: 0xc06a1b0  jal         func_1A86C0
label_1a8b28:
    if (ctx->pc == 0x1A8B28u) {
        ctx->pc = 0x1A8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B24u;
        // 0x1a8b28: 0x264501e8  addiu       $a1, $s2, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B2Cu;
        goto label_1a8b2c;
    }
    ctx->pc = 0x1A8B24u;
    SET_GPR_U32(ctx, 31, 0x1A8B2Cu);
    ctx->pc = 0x1A8B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B24u;
    // 0x1a8b28: 0x264501e8  addiu       $a1, $s2, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1A8B24u, 0x1A8B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B2Cu;
label_1a8b2c:
    // 0x1a8b2c: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
label_1a8b30:
    // 0x1a8b30: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x1a8b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a8b34:
    // 0x1a8b34: 0x8e440154  lw          $a0, 0x154($s2)
    ctx->pc = 0x1a8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1a8b38:
    // 0x1a8b38: 0x8e45015c  lw          $a1, 0x15C($s2)
    ctx->pc = 0x1a8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_1a8b3c:
    // 0x1a8b3c: 0xae4201e8  sw          $v0, 0x1E8($s2)
    ctx->pc = 0x1a8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 2));
label_1a8b40:
    // 0x1a8b40: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x1a8b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
label_1a8b44:
    // 0x1a8b44: 0xae4001e4  sw          $zero, 0x1E4($s2)
    ctx->pc = 0x1a8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 0));
label_1a8b48:
    // 0x1a8b48: 0xae440150  sw          $a0, 0x150($s2)
    ctx->pc = 0x1a8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 4));
label_1a8b4c:
    // 0x1a8b4c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
label_1a8b50:
    if (ctx->pc == 0x1A8B50u) {
        ctx->pc = 0x1A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B4Cu;
        // 0x1a8b50: 0xae400160  sw          $zero, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B54u;
        goto label_1a8b54;
    }
    ctx->pc = 0x1A8B4Cu;
    {
        const bool branch_taken_0x1a8b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B4Cu;
        // 0x1a8b50: 0xae400160  sw          $zero, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b4c) {
            ctx->pc = 0x1A8B5Cu;
            goto label_1a8b5c;
        }
    }
    ctx->pc = 0x1A8B54u;
label_1a8b54:
    // 0x1a8b54: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a8b58:
    // 0x1a8b58: 0xae42015c  sw          $v0, 0x15C($s2)
    ctx->pc = 0x1a8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 2));
label_1a8b5c:
    // 0x1a8b5c: 0x8e440150  lw          $a0, 0x150($s2)
    ctx->pc = 0x1a8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a8b60:
    // 0x1a8b60: 0x2482ffed  addiu       $v0, $a0, -0x13
    ctx->pc = 0x1a8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
label_1a8b64:
    // 0x1a8b64: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1a8b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1a8b68:
    // 0x1a8b68: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1a8b6c:
    if (ctx->pc == 0x1A8B6Cu) {
        ctx->pc = 0x1A8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B68u;
        // 0x1a8b6c: 0x8e430158  lw          $v1, 0x158($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B70u;
        goto label_1a8b70;
    }
    ctx->pc = 0x1A8B68u;
    {
        const bool branch_taken_0x1a8b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b68) {
            ctx->pc = 0x1A8B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8B68u;
            // 0x1a8b6c: 0x8e430158  lw          $v1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8BB0u;
            goto label_1a8bb0;
        }
    }
    ctx->pc = 0x1A8B70u;
label_1a8b70:
    // 0x1a8b70: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a8b74:
    // 0x1a8b74: 0x26836a00  addiu       $v1, $s4, 0x6A00
    ctx->pc = 0x1a8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 27136));
label_1a8b78:
    // 0x1a8b78: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1a8b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a8b7c:
    // 0x1a8b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8b80:
    // 0x1a8b80: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1a8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a8b84:
    // 0x1a8b84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a8b88:
    if (ctx->pc == 0x1A8B88u) {
        ctx->pc = 0x1A8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B84u;
        // 0x1a8b88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B8Cu;
        goto label_1a8b8c;
    }
    ctx->pc = 0x1A8B84u;
    {
        const bool branch_taken_0x1a8b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B84u;
        // 0x1a8b88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b84) {
            ctx->pc = 0x1A8B98u;
            goto label_1a8b98;
        }
    }
    ctx->pc = 0x1A8B8Cu;
label_1a8b8c:
    // 0x1a8b8c: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_1a8b90:
    // 0x1a8b90: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1a8b94:
    if (ctx->pc == 0x1A8B94u) {
        ctx->pc = 0x1A8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B90u;
        // 0x1a8b94: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B98u;
        goto label_1a8b98;
    }
    ctx->pc = 0x1A8B90u;
    {
        const bool branch_taken_0x1a8b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B90u;
        // 0x1a8b94: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b90) {
            ctx->pc = 0x1A8BB4u;
            goto label_1a8bb4;
        }
    }
    ctx->pc = 0x1A8B98u;
label_1a8b98:
    // 0x1a8b98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a8b9c:
    // 0x1a8b9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a8ba0:
    // 0x1a8ba0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a8ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8ba4:
    // 0x1a8ba4: 0xe6400170  swc1        $f0, 0x170($s2)
    ctx->pc = 0x1a8ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 368), bits); }
label_1a8ba8:
    // 0x1a8ba8: 0xe640016c  swc1        $f0, 0x16C($s2)
    ctx->pc = 0x1a8ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
label_1a8bac:
    // 0x1a8bac: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x1a8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_1a8bb0:
    // 0x1a8bb0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a8bb4:
    // 0x1a8bb4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a8bb8:
    if (ctx->pc == 0x1A8BB8u) {
        ctx->pc = 0x1A8BBCu;
        goto label_1a8bbc;
    }
    ctx->pc = 0x1A8BB4u;
    {
        const bool branch_taken_0x1a8bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8bb4) {
            ctx->pc = 0x1A8BC8u;
            goto label_1a8bc8;
        }
    }
    ctx->pc = 0x1A8BBCu;
label_1a8bbc:
    // 0x1a8bbc: 0x924201dc  lbu         $v0, 0x1DC($s2)
    ctx->pc = 0x1a8bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 476)));
label_1a8bc0:
    // 0x1a8bc0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a8bc4:
    if (ctx->pc == 0x1A8BC4u) {
        ctx->pc = 0x1A8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC0u;
        // 0x1a8bc4: 0x8e430148  lw          $v1, 0x148($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BC8u;
        goto label_1a8bc8;
    }
    ctx->pc = 0x1A8BC0u;
    {
        const bool branch_taken_0x1a8bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bc0) {
            ctx->pc = 0x1A8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8BC0u;
            // 0x1a8bc4: 0x8e430148  lw          $v1, 0x148($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8BDCu;
            goto label_1a8bdc;
        }
    }
    ctx->pc = 0x1A8BC8u;
label_1a8bc8:
    // 0x1a8bc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a8bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a8bcc:
    // 0x1a8bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8bd0:
    // 0x1a8bd0: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x1a8bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
label_1a8bd4:
    // 0x1a8bd4: 0xe64001b0  swc1        $f0, 0x1B0($s2)
    ctx->pc = 0x1a8bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
label_1a8bd8:
    // 0x1a8bd8: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_1a8bdc:
    // 0x1a8bdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8be0:
    // 0x1a8be0: 0x9064018c  lbu         $a0, 0x18C($v1)
    ctx->pc = 0x1a8be0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 396)));
label_1a8be4:
    // 0x1a8be4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1a8be8:
    if (ctx->pc == 0x1A8BE8u) {
        ctx->pc = 0x1A8BECu;
        goto label_1a8bec;
    }
    ctx->pc = 0x1A8BE4u;
    {
        const bool branch_taken_0x1a8be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8be4) {
            ctx->pc = 0x1A8BF4u;
            goto label_1a8bf4;
        }
    }
    ctx->pc = 0x1A8BECu;
label_1a8bec:
    // 0x1a8bec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8bf0:
    if (ctx->pc == 0x1A8BF0u) {
        ctx->pc = 0x1A8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BECu;
        // 0x1a8bf0: 0xa060018c  sb          $zero, 0x18C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BF4u;
        goto label_1a8bf4;
    }
    ctx->pc = 0x1A8BECu;
    {
        const bool branch_taken_0x1a8bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BECu;
        // 0x1a8bf0: 0xa060018c  sb          $zero, 0x18C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bec) {
            ctx->pc = 0x1A8C00u;
            goto label_1a8c00;
        }
    }
    ctx->pc = 0x1A8BF4u;
label_1a8bf4:
    // 0x1a8bf4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1a8bf8:
    if (ctx->pc == 0x1A8BF8u) {
        ctx->pc = 0x1A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BF4u;
        // 0x1a8bf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BFCu;
        goto label_1a8bfc;
    }
    ctx->pc = 0x1A8BF4u;
    {
        const bool branch_taken_0x1a8bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BF4u;
        // 0x1a8bf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bf4) {
            ctx->pc = 0x1A8C00u;
            goto label_1a8c00;
        }
    }
    ctx->pc = 0x1A8BFCu;
label_1a8bfc:
    // 0x1a8bfc: 0xa062018c  sb          $v0, 0x18C($v1)
    ctx->pc = 0x1a8bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 396), (uint8_t)GPR_U32(ctx, 2));
label_1a8c00:
    // 0x1a8c00: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x1a8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
label_1a8c04:
    // 0x1a8c04: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x1a8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_1a8c08:
    // 0x1a8c08: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_1a8c0c:
    // 0x1a8c0c: 0x8c6201b8  lw          $v0, 0x1B8($v1)
    ctx->pc = 0x1a8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
label_1a8c10:
    // 0x1a8c10: 0x40f809  jalr        $v0
label_1a8c14:
    if (ctx->pc == 0x1A8C14u) {
        ctx->pc = 0x1A8C18u;
        goto label_1a8c18;
    }
    ctx->pc = 0x1A8C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8C18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8C10u, 0x1A8C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8C18u;
label_1a8c18:
    // 0x1a8c18: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a8c1c:
    if (ctx->pc == 0x1A8C1Cu) {
        ctx->pc = 0x1A8C20u;
        goto label_1a8c20;
    }
    ctx->pc = 0x1A8C18u;
    {
        const bool branch_taken_0x1a8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c18) {
            ctx->pc = 0x1A8C6Cu;
            goto label_1a8c6c;
        }
    }
    ctx->pc = 0x1A8C20u;
label_1a8c20:
    // 0x1a8c20: 0xc0d737c  jal         func_35CDF0
label_1a8c24:
    if (ctx->pc == 0x1A8C24u) {
        ctx->pc = 0x1A8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C20u;
        // 0x1a8c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C28u;
        goto label_1a8c28;
    }
    ctx->pc = 0x1A8C20u;
    SET_GPR_U32(ctx, 31, 0x1A8C28u);
    ctx->pc = 0x1A8C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C20u;
    // 0x1a8c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1A8C20u, 0x1A8C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C28u;
label_1a8c28:
    // 0x1a8c28: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1a8c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a8c2c:
    // 0x1a8c2c: 0xc0d737c  jal         func_35CDF0
label_1a8c30:
    if (ctx->pc == 0x1A8C30u) {
        ctx->pc = 0x1A8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C2Cu;
        // 0x1a8c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C34u;
        goto label_1a8c34;
    }
    ctx->pc = 0x1A8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8C34u);
    ctx->pc = 0x1A8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C2Cu;
    // 0x1a8c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1A8C2Cu, 0x1A8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C34u;
label_1a8c34:
    // 0x1a8c34: 0x8e450150  lw          $a1, 0x150($s2)
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1a8c38:
    // 0x1a8c38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a8c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c3c:
    // 0x1a8c3c: 0xc069e0e  jal         func_1A7838
label_1a8c40:
    if (ctx->pc == 0x1A8C40u) {
        ctx->pc = 0x1A8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C3Cu;
        // 0x1a8c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C44u;
        goto label_1a8c44;
    }
    ctx->pc = 0x1A8C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A8C44u);
    ctx->pc = 0x1A8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C3Cu;
    // 0x1a8c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7838u, 0x1A8C3Cu, 0x1A8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C44u;
label_1a8c44:
    // 0x1a8c44: 0x8e45014c  lw          $a1, 0x14C($s2)
    ctx->pc = 0x1a8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_1a8c48:
    // 0x1a8c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c4c:
    // 0x1a8c4c: 0xc069e0e  jal         func_1A7838
label_1a8c50:
    if (ctx->pc == 0x1A8C50u) {
        ctx->pc = 0x1A8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C4Cu;
        // 0x1a8c50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C54u;
        goto label_1a8c54;
    }
    ctx->pc = 0x1A8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8C54u);
    ctx->pc = 0x1A8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C4Cu;
    // 0x1a8c50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7838u, 0x1A8C4Cu, 0x1A8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C54u;
label_1a8c54:
    // 0x1a8c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c58:
    // 0x1a8c58: 0xc0d7412  jal         func_35D048
label_1a8c5c:
    if (ctx->pc == 0x1A8C5Cu) {
        ctx->pc = 0x1A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C58u;
        // 0x1a8c5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C60u;
        goto label_1a8c60;
    }
    ctx->pc = 0x1A8C58u;
    SET_GPR_U32(ctx, 31, 0x1A8C60u);
    ctx->pc = 0x1A8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C58u;
    // 0x1a8c5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1A8C58u, 0x1A8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C60u;
label_1a8c60:
    // 0x1a8c60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c64:
    // 0x1a8c64: 0xc0d7412  jal         func_35D048
label_1a8c68:
    if (ctx->pc == 0x1A8C68u) {
        ctx->pc = 0x1A8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C64u;
        // 0x1a8c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C6Cu;
        goto label_1a8c6c;
    }
    ctx->pc = 0x1A8C64u;
    SET_GPR_U32(ctx, 31, 0x1A8C6Cu);
    ctx->pc = 0x1A8C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C64u;
    // 0x1a8c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1A8C64u, 0x1A8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C6Cu;
label_1a8c6c:
    // 0x1a8c6c: 0xc06a328  jal         func_1A8CA0
label_1a8c70:
    if (ctx->pc == 0x1A8C70u) {
        ctx->pc = 0x1A8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C6Cu;
        // 0x1a8c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C74u;
        goto label_1a8c74;
    }
    ctx->pc = 0x1A8C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A8C74u);
    ctx->pc = 0x1A8C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C6Cu;
    // 0x1a8c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x1A8C6Cu, 0x1A8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C74u;
label_1a8c74:
    // 0x1a8c74: 0xae400190  sw          $zero, 0x190($s2)
    ctx->pc = 0x1a8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 0));
label_1a8c78:
    // 0x1a8c78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8c7c:
    // 0x1a8c7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a8c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a8c80:
    // 0x1a8c80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a8c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8c84:
    // 0x1a8c84: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a8c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8c88:
    // 0x1a8c88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a8c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8c8c:
    // 0x1a8c8c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1a8c8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a8c90:
    // 0x1a8c90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a8c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8c94:
    // 0x1a8c94: 0x3e00008  jr          $ra
label_1a8c98:
    if (ctx->pc == 0x1A8C98u) {
        ctx->pc = 0x1A8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C94u;
        // 0x1a8c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C9Cu;
        goto label_1a8c9c;
    }
    ctx->pc = 0x1A8C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C94u;
        // 0x1a8c98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8C9Cu;
label_1a8c9c:
    // 0x1a8c9c: 0x0  nop
    ctx->pc = 0x1a8c9cu;
    // NOP
    ctx->pc = 0x1a8ca0u;
}
