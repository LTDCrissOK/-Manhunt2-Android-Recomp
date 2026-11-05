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

// Function: sub_00249748
// Address: 0x249748 - 0x249be0
void sub_00249748_0x249748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249748_0x249748");
#endif

    switch (ctx->pc) {
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        default: break;
    }

    ctx->pc = 0x249748u;

label_249748:
    // 0x249748: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x249748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24974c:
    // 0x24974c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x24974cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_249750:
    // 0x249750: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x249750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_249754:
    // 0x249754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249758:
    // 0x249758: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x249758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_24975c:
    // 0x24975c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249760:
    // 0x249760: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x249760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_249764:
    // 0x249764: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x249764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_249768:
    // 0x249768: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x249768u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_24976c:
    // 0x24976c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x24976cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_249770:
    // 0x249770: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x249770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_249774:
    // 0x249774: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x249774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_249778:
    // 0x249778: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x249778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_24977c:
    // 0x24977c: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x24977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
label_249780:
    // 0x249780: 0xa2200794  sb          $zero, 0x794($s1)
    ctx->pc = 0x249780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1940), (uint8_t)GPR_U32(ctx, 0));
label_249784:
    // 0x249784: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x249784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_249788:
    // 0x249788: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x249788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_24978c:
    // 0x24978c: 0x14400109  bnez        $v0, . + 4 + (0x109 << 2)
label_249790:
    if (ctx->pc == 0x249790u) {
        ctx->pc = 0x249790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24978Cu;
        // 0x249790: 0xa2200795  sb          $zero, 0x795($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1941), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249794u;
        goto label_249794;
    }
    ctx->pc = 0x24978Cu;
    {
        const bool branch_taken_0x24978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24978Cu;
        // 0x249790: 0xa2200795  sb          $zero, 0x795($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1941), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24978c) {
            ctx->pc = 0x249BB4u;
            goto label_249bb4;
        }
    }
    ctx->pc = 0x249794u;
label_249794:
    // 0x249794: 0x8e2210c8  lw          $v0, 0x10C8($s1)
    ctx->pc = 0x249794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4296)));
label_249798:
    // 0x249798: 0x10440106  beq         $v0, $a0, . + 4 + (0x106 << 2)
label_24979c:
    if (ctx->pc == 0x24979Cu) {
        ctx->pc = 0x24979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249798u;
        // 0x24979c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497A0u;
        goto label_2497a0;
    }
    ctx->pc = 0x249798u;
    {
        const bool branch_taken_0x249798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x24979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249798u;
        // 0x24979c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249798) {
            ctx->pc = 0x249BB4u;
            goto label_249bb4;
        }
    }
    ctx->pc = 0x2497A0u;
label_2497a0:
    // 0x2497a0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2497a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_2497a4:
    // 0x2497a4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2497a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_2497a8:
    // 0x2497a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2497a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2497ac:
    // 0x2497ac: 0x24622450  addiu       $v0, $v1, 0x2450
    ctx->pc = 0x2497acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2497b0:
    // 0x2497b0: 0xc4622450  lwc1        $f2, 0x2450($v1)
    ctx->pc = 0x2497b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2497b4:
    // 0x2497b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2497b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2497b8:
    // 0x2497b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2497b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2497bc:
    // 0x2497bc: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x2497bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2497c0:
    // 0x2497c0: 0x46000185  abs.s       $f6, $f0
    ctx->pc = 0x2497c0u;
    ctx->f[6] = FPU_ABS_S(ctx->f[0]);
label_2497c4:
    // 0x2497c4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2497c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2497c8:
    // 0x2497c8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2497c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_2497cc:
    // 0x2497cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2497ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2497d0:
    // 0x2497d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2497d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2497d4:
    // 0x2497d4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2497d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2497d8:
    // 0x2497d8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2497d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2497dc:
    // 0x2497dc: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x2497dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2497e0:
    // 0x2497e0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2497e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2497e4:
    // 0x2497e4: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x2497e4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2497e8:
    // 0x2497e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2497e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2497ec:
    // 0x2497ec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2497ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2497f0:
    // 0x2497f0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2497f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2497f4:
    // 0x2497f4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2497f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2497f8:
    // 0x2497f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2497f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2497fc:
    // 0x2497fc: 0x45000044  bc1f        . + 4 + (0x44 << 2)
label_249800:
    if (ctx->pc == 0x249800u) {
        ctx->pc = 0x249800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497FCu;
        // 0x249800: 0xc6370374  lwc1        $f23, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249804u;
        goto label_249804;
    }
    ctx->pc = 0x2497FCu;
    {
        const bool branch_taken_0x2497fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497FCu;
        // 0x249800: 0xc6370374  lwc1        $f23, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497fc) {
            ctx->pc = 0x249910u;
            goto label_249910;
        }
    }
    ctx->pc = 0x249804u;
label_249804:
    // 0x249804: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x249804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_249808:
    // 0x249808: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x249808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_24980c:
    // 0x24980c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24980cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249810:
    // 0x249810: 0x27a30054  addiu       $v1, $sp, 0x54
    ctx->pc = 0x249810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_249814:
    // 0x249814: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_249818:
    // 0x249818: 0x3421205e  ori         $at, $at, 0x205E
    ctx->pc = 0x249818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8286);
label_24981c:
    // 0x24981c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24981cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249820:
    // 0x249820: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x249820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_249824:
    // 0x249824: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x249824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_249828:
    // 0x249828: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x249828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_24982c:
    // 0x24982c: 0xa2240795  sb          $a0, 0x795($s1)
    ctx->pc = 0x24982cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1941), (uint8_t)GPR_U32(ctx, 4));
label_249830:
    // 0x249830: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x249830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_249834:
    // 0x249834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x249834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_249838:
    // 0x249838: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x249838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24983c:
    // 0x24983c: 0x0  nop
    ctx->pc = 0x24983cu;
    // NOP
label_249840:
    // 0x249840: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_249844:
    if (ctx->pc == 0x249844u) {
        ctx->pc = 0x249844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249840u;
        // 0x249844: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249848u;
        goto label_249848;
    }
    ctx->pc = 0x249840u;
    {
        const bool branch_taken_0x249840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249840u;
        // 0x249844: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249840) {
            ctx->pc = 0x24984Cu;
            goto label_24984c;
        }
    }
    ctx->pc = 0x249848u;
label_249848:
    // 0x249848: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x249848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24984c:
    // 0x24984c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x24984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249850:
    // 0x249850: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_249854:
    // 0x249854: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x249854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_249858:
    // 0x249858: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x249858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_24985c:
    // 0x24985c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249860:
    // 0x249860: 0x24845870  addiu       $a0, $a0, 0x5870
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
label_249864:
    // 0x249864: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x249864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_249868:
    // 0x249868: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24986c:
    // 0x24986c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24986cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249870:
    // 0x249870: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x249870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_249874:
    // 0x249874: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x249874u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_249878:
    // 0x249878: 0xc0b8f68  jal         func_2E3DA0
label_24987c:
    if (ctx->pc == 0x24987Cu) {
        ctx->pc = 0x24987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249878u;
        // 0x24987c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249880u;
        goto label_249880;
    }
    ctx->pc = 0x249878u;
    SET_GPR_U32(ctx, 31, 0x249880u);
    ctx->pc = 0x24987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249878u;
    // 0x24987c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DA0u, 0x249878u, 0x249880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249880u;
label_249880:
    // 0x249880: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_249884:
    // 0x249884: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x249884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_249888:
    // 0x249888: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24988c:
    // 0x24988c: 0x0  nop
    ctx->pc = 0x24988cu;
    // NOP
label_249890:
    // 0x249890: 0x4614bd02  mul.s       $f20, $f23, $f20
    ctx->pc = 0x249890u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
label_249894:
    // 0x249894: 0xc0e3f98  jal         func_38FE60
label_249898:
    if (ctx->pc == 0x249898u) {
        ctx->pc = 0x249898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249894u;
        // 0x249898: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24989Cu;
        goto label_24989c;
    }
    ctx->pc = 0x249894u;
    SET_GPR_U32(ctx, 31, 0x24989Cu);
    ctx->pc = 0x249898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249894u;
    // 0x249898: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x249894u, 0x24989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24989Cu;
label_24989c:
    // 0x24989c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2498a0:
    // 0x2498a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2498a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2498a4:
    // 0x2498a4: 0xc0e3f1c  jal         func_38FC70
label_2498a8:
    if (ctx->pc == 0x2498A8u) {
        ctx->pc = 0x2498A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498A4u;
        // 0x2498a8: 0xe7b50024  swc1        $f21, 0x24($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498ACu;
        goto label_2498ac;
    }
    ctx->pc = 0x2498A4u;
    SET_GPR_U32(ctx, 31, 0x2498ACu);
    ctx->pc = 0x2498A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498A4u;
    // 0x2498a8: 0xe7b50024  swc1        $f21, 0x24($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2498A4u, 0x2498ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498ACu;
label_2498ac:
    // 0x2498ac: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2498acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2498b0:
    // 0x2498b0: 0x4600b102  mul.s       $f4, $f22, $f0
    ctx->pc = 0x2498b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2498b4:
    // 0x2498b4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2498b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2498b8:
    // 0x2498b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2498bc:
    // 0x2498bc: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x2498bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2498c0:
    // 0x2498c0: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x2498c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_2498c4:
    // 0x2498c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2498c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2498c8:
    // 0x2498c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2498c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2498cc:
    // 0x2498cc: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x2498ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_2498d0:
    // 0x2498d0: 0x4605b142  mul.s       $f5, $f22, $f5
    ctx->pc = 0x2498d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[5]);
label_2498d4:
    // 0x2498d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2498d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2498d8:
    // 0x2498d8: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x2498d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2498dc:
    // 0x2498dc: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2498dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2498e0:
    // 0x2498e0: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2498e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2498e4:
    // 0x2498e4: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x2498e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2498e8:
    // 0x2498e8: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2498e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_2498ec:
    // 0x2498ec: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2498ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2498f0:
    // 0x2498f0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2498f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2498f4:
    // 0x2498f4: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2498f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2498f8:
    // 0x2498f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2498f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2498fc:
    // 0x2498fc: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2498fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_249900:
    // 0x249900: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x249900u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_249904:
    // 0x249904: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x249904u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_249908:
    // 0x249908: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x249908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24990c:
    // 0x24990c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_249910:
    // 0x249910: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_249914:
    // 0x249914: 0x8c4325d8  lw          $v1, 0x25D8($v0)
    ctx->pc = 0x249914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9688)));
label_249918:
    // 0x249918: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_24991c:
    if (ctx->pc == 0x24991Cu) {
        ctx->pc = 0x24991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249918u;
        // 0x24991c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249920u;
        goto label_249920;
    }
    ctx->pc = 0x249918u;
    {
        const bool branch_taken_0x249918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249918u;
        // 0x24991c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249918) {
            ctx->pc = 0x249954u;
            goto label_249954;
        }
    }
    ctx->pc = 0x249920u;
label_249920:
    // 0x249920: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_249924:
    // 0x249924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_249928:
    if (ctx->pc == 0x249928u) {
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24992Cu;
        goto label_24992c;
    }
    ctx->pc = 0x249924u;
    {
        const bool branch_taken_0x249924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249924) {
            ctx->pc = 0x249940u;
            goto label_249940;
        }
    }
    ctx->pc = 0x24992Cu;
label_24992c:
    // 0x24992c: 0x26022450  addiu       $v0, $s0, 0x2450
    ctx->pc = 0x24992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
label_249930:
    // 0x249930: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_249934:
    // 0x249934: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x249934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_249938:
    // 0x249938: 0x10000002  b           . + 4 + (0x2 << 2)
label_24993c:
    if (ctx->pc == 0x24993Cu) {
        ctx->pc = 0x24993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249938u;
        // 0x24993c: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249940u;
        goto label_249940;
    }
    ctx->pc = 0x249938u;
    {
        const bool branch_taken_0x249938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249938u;
        // 0x24993c: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249938) {
            ctx->pc = 0x249944u;
            goto label_249944;
        }
    }
    ctx->pc = 0x249940u;
label_249940:
    // 0x249940: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x249940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249944:
    // 0x249944: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_249948:
    if (ctx->pc == 0x249948u) {
        ctx->pc = 0x249948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249944u;
        // 0x249948: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24994Cu;
        goto label_24994c;
    }
    ctx->pc = 0x249944u;
    {
        const bool branch_taken_0x249944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249944u;
        // 0x249948: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249944) {
            ctx->pc = 0x249984u;
            goto label_249984;
        }
    }
    ctx->pc = 0x24994Cu;
label_24994c:
    // 0x24994c: 0x1000000d  b           . + 4 + (0xD << 2)
label_249950:
    if (ctx->pc == 0x249950u) {
        ctx->pc = 0x249950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24994Cu;
        // 0x249950: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249954u;
        goto label_249954;
    }
    ctx->pc = 0x24994Cu;
    {
        const bool branch_taken_0x24994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24994Cu;
        // 0x249950: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24994c) {
            ctx->pc = 0x249984u;
            goto label_249984;
        }
    }
    ctx->pc = 0x249954u;
label_249954:
    // 0x249954: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x249954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_249958:
    // 0x249958: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_24995c:
    if (ctx->pc == 0x24995Cu) {
        ctx->pc = 0x24995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249958u;
        // 0x24995c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249960u;
        goto label_249960;
    }
    ctx->pc = 0x249958u;
    {
        const bool branch_taken_0x249958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249958u;
        // 0x24995c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249958) {
            ctx->pc = 0x249974u;
            goto label_249974;
        }
    }
    ctx->pc = 0x249960u;
label_249960:
    // 0x249960: 0x26022450  addiu       $v0, $s0, 0x2450
    ctx->pc = 0x249960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
label_249964:
    // 0x249964: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_249968:
    // 0x249968: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_24996c:
    // 0x24996c: 0x10000002  b           . + 4 + (0x2 << 2)
label_249970:
    if (ctx->pc == 0x249970u) {
        ctx->pc = 0x249970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24996Cu;
        // 0x249970: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249974u;
        goto label_249974;
    }
    ctx->pc = 0x24996Cu;
    {
        const bool branch_taken_0x24996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24996Cu;
        // 0x249970: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24996c) {
            ctx->pc = 0x249978u;
            goto label_249978;
        }
    }
    ctx->pc = 0x249974u;
label_249974:
    // 0x249974: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x249974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249978:
    // 0x249978: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_24997c:
    if (ctx->pc == 0x24997Cu) {
        ctx->pc = 0x24997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249978u;
        // 0x24997c: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249980u;
        goto label_249980;
    }
    ctx->pc = 0x249978u;
    {
        const bool branch_taken_0x249978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249978u;
        // 0x24997c: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249978) {
            ctx->pc = 0x249984u;
            goto label_249984;
        }
    }
    ctx->pc = 0x249980u;
label_249980:
    // 0x249980: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x249980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249984:
    // 0x249984: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x249984u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
label_249988:
    // 0x249988: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_24998c:
    // 0x24998c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x24998cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_249990:
    // 0x249990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249994:
    // 0x249994: 0x0  nop
    ctx->pc = 0x249994u;
    // NOP
label_249998:
    // 0x249998: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x249998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24999c:
    // 0x24999c: 0x0  nop
    ctx->pc = 0x24999cu;
    // NOP
label_2499a0:
    // 0x2499a0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2499a4:
    if (ctx->pc == 0x2499A4u) {
        ctx->pc = 0x2499A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499A0u;
        // 0x2499a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499A8u;
        goto label_2499a8;
    }
    ctx->pc = 0x2499A0u;
    {
        const bool branch_taken_0x2499a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2499A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499A0u;
        // 0x2499a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499a0) {
            ctx->pc = 0x2499D4u;
            goto label_2499d4;
        }
    }
    ctx->pc = 0x2499A8u;
label_2499a8:
    // 0x2499a8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2499a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_2499ac:
    // 0x2499ac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2499acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2499b0:
    // 0x2499b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2499b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2499b4:
    // 0x2499b4: 0xa2220794  sb          $v0, 0x794($s1)
    ctx->pc = 0x2499b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1940), (uint8_t)GPR_U32(ctx, 2));
label_2499b8:
    // 0x2499b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2499b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2499bc:
    // 0x2499bc: 0x460c1302  mul.s       $f12, $f2, $f12
    ctx->pc = 0x2499bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_2499c0:
    // 0x2499c0: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x2499c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2499c4:
    // 0x2499c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2499c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2499c8:
    // 0x2499c8: 0x8c4301c8  lw          $v1, 0x1C8($v0)
    ctx->pc = 0x2499c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
label_2499cc:
    // 0x2499cc: 0x60f809  jalr        $v1
label_2499d0:
    if (ctx->pc == 0x2499D0u) {
        ctx->pc = 0x2499D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499CCu;
        // 0x2499d0: 0x460cbb01  sub.s       $f12, $f23, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499D4u;
        goto label_2499d4;
    }
    ctx->pc = 0x2499CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2499D4u);
        ctx->pc = 0x2499D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499CCu;
        // 0x2499d0: 0x460cbb01  sub.s       $f12, $f23, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2499CCu, 0x2499D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2499D4u;
label_2499d4:
    // 0x2499d4: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2499d8:
    // 0x2499d8: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x2499d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2499dc:
    // 0x2499dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2499e0:
    // 0x2499e0: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2499e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2499e4:
    // 0x2499e4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2499e8:
    // 0x2499e8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2499e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2499ec:
    // 0x2499ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2499ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2499f0:
    // 0x2499f0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2499f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2499f4:
    // 0x2499f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2499f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2499f8:
    // 0x2499f8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2499f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2499fc:
    // 0x2499fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2499fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a00:
    // 0x249a00: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x249a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_249a04:
    // 0x249a04: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x249a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_249a08:
    // 0x249a08: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x249a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_249a0c:
    // 0x249a0c: 0x60f809  jalr        $v1
label_249a10:
    if (ctx->pc == 0x249A10u) {
        ctx->pc = 0x249A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A0Cu;
        // 0x249a10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A14u;
        goto label_249a14;
    }
    ctx->pc = 0x249A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249A14u);
        ctx->pc = 0x249A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A0Cu;
        // 0x249a10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249A0Cu, 0x249A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249A14u;
label_249a14:
    // 0x249a14: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x249a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_249a18:
    // 0x249a18: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_249a1c:
    if (ctx->pc == 0x249A1Cu) {
        ctx->pc = 0x249A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A18u;
        // 0x249a1c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A20u;
        goto label_249a20;
    }
    ctx->pc = 0x249A18u;
    {
        const bool branch_taken_0x249a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a18) {
            ctx->pc = 0x249A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A18u;
            // 0x249a1c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A30u;
            goto label_249a30;
        }
    }
    ctx->pc = 0x249A20u;
label_249a20:
    // 0x249a20: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_249a24:
    // 0x249a24: 0xc0b7264  jal         func_2DC990
label_249a28:
    if (ctx->pc == 0x249A28u) {
        ctx->pc = 0x249A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A24u;
        // 0x249a28: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A2Cu;
        goto label_249a2c;
    }
    ctx->pc = 0x249A24u;
    SET_GPR_U32(ctx, 31, 0x249A2Cu);
    ctx->pc = 0x249A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A24u;
    // 0x249a28: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x249A24u, 0x249A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A2Cu;
label_249a2c:
    // 0x249a2c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_249a30:
    // 0x249a30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_249a34:
    // 0x249a34: 0x8c64bd64  lw          $a0, -0x429C($v1)
    ctx->pc = 0x249a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950244)));
label_249a38:
    // 0x249a38: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x249a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249a3c:
    // 0x249a3c: 0x1480004d  bnez        $a0, . + 4 + (0x4D << 2)
label_249a40:
    if (ctx->pc == 0x249A40u) {
        ctx->pc = 0x249A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A3Cu;
        // 0x249a40: 0x24c70040  addiu       $a3, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A44u;
        goto label_249a44;
    }
    ctx->pc = 0x249A3Cu;
    {
        const bool branch_taken_0x249a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A3Cu;
        // 0x249a40: 0x24c70040  addiu       $a3, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a3c) {
            ctx->pc = 0x249B74u;
            goto label_249b74;
        }
    }
    ctx->pc = 0x249A44u;
label_249a44:
    // 0x249a44: 0x922211c1  lbu         $v0, 0x11C1($s1)
    ctx->pc = 0x249a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4545)));
label_249a48:
    // 0x249a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249a4c:
    // 0x249a4c: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
label_249a50:
    if (ctx->pc == 0x249A50u) {
        ctx->pc = 0x249A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A4Cu;
        // 0x249a50: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A54u;
        goto label_249a54;
    }
    ctx->pc = 0x249A4Cu;
    {
        const bool branch_taken_0x249a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a4c) {
            ctx->pc = 0x249A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A4Cu;
            // 0x249a50: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B78u;
            goto label_249b78;
        }
    }
    ctx->pc = 0x249A54u;
label_249a54:
    // 0x249a54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x249a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_249a58:
    // 0x249a58: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x249a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_249a5c:
    // 0x249a5c: 0x8c6411d0  lw          $a0, 0x11D0($v1)
    ctx->pc = 0x249a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4560)));
label_249a60:
    // 0x249a60: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_249a64:
    // 0x249a64: 0x24b20040  addiu       $s2, $a1, 0x40
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_249a68:
    // 0x249a68: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x249a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_249a6c:
    // 0x249a6c: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x249a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_249a70:
    // 0x249a70: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x249a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_249a74:
    // 0x249a74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x249a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_249a78:
    // 0x249a78: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x249a78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_249a7c:
    // 0x249a7c: 0x24c30060  addiu       $v1, $a2, 0x60
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_249a80:
    // 0x249a80: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x249a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_249a84:
    // 0x249a84: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x249a84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_249a88:
    // 0x249a88: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x249a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_249a8c:
    // 0x249a8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x249a8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_249a90:
    // 0x249a90: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x249a90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_249a94:
    // 0x249a94: 0x8e2305b0  lw          $v1, 0x5B0($s1)
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_249a98:
    // 0x249a98: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_249a9c:
    if (ctx->pc == 0x249A9Cu) {
        ctx->pc = 0x249A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A98u;
        // 0x249a9c: 0xc63411d4  lwc1        $f20, 0x11D4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AA0u;
        goto label_249aa0;
    }
    ctx->pc = 0x249A98u;
    {
        const bool branch_taken_0x249a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A98u;
        // 0x249a9c: 0xc63411d4  lwc1        $f20, 0x11D4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a98) {
            ctx->pc = 0x249B40u;
            goto label_249b40;
        }
    }
    ctx->pc = 0x249AA0u;
label_249aa0:
    // 0x249aa0: 0x8e62aa88  lw          $v0, -0x5578($s3)
    ctx->pc = 0x249aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945416)));
label_249aa4:
    // 0x249aa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_249aa8:
    if (ctx->pc == 0x249AA8u) {
        ctx->pc = 0x249AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AA4u;
        // 0x249aa8: 0x26022450  addiu       $v0, $s0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AACu;
        goto label_249aac;
    }
    ctx->pc = 0x249AA4u;
    {
        const bool branch_taken_0x249aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AA4u;
        // 0x249aa8: 0x26022450  addiu       $v0, $s0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249aa4) {
            ctx->pc = 0x249ABCu;
            goto label_249abc;
        }
    }
    ctx->pc = 0x249AACu;
label_249aac:
    // 0x249aac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x249aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_249ab0:
    // 0x249ab0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x249ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_249ab4:
    // 0x249ab4: 0x10000002  b           . + 4 + (0x2 << 2)
label_249ab8:
    if (ctx->pc == 0x249AB8u) {
        ctx->pc = 0x249AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AB4u;
        // 0x249ab8: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249ABCu;
        goto label_249abc;
    }
    ctx->pc = 0x249AB4u;
    {
        const bool branch_taken_0x249ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AB4u;
        // 0x249ab8: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ab4) {
            ctx->pc = 0x249AC0u;
            goto label_249ac0;
        }
    }
    ctx->pc = 0x249ABCu;
label_249abc:
    // 0x249abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249ac0:
    // 0x249ac0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_249ac4:
    if (ctx->pc == 0x249AC4u) {
        ctx->pc = 0x249AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC0u;
        // 0x249ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AC8u;
        goto label_249ac8;
    }
    ctx->pc = 0x249AC0u;
    {
        const bool branch_taken_0x249ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC0u;
        // 0x249ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ac0) {
            ctx->pc = 0x249B38u;
            goto label_249b38;
        }
    }
    ctx->pc = 0x249AC8u;
label_249ac8:
    // 0x249ac8: 0xc0a21b0  jal         func_2886C0
label_249acc:
    if (ctx->pc == 0x249ACCu) {
        ctx->pc = 0x249AD0u;
        goto label_249ad0;
    }
    ctx->pc = 0x249AC8u;
    SET_GPR_U32(ctx, 31, 0x249AD0u);
    ctx->pc = 0x2886C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886C0u, 0x249AC8u, 0x249AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AD0u;
label_249ad0:
    // 0x249ad0: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x249ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_249ad4:
    // 0x249ad4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x249ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_249ad8:
    // 0x249ad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_249adc:
    if (ctx->pc == 0x249ADCu) {
        ctx->pc = 0x249ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD8u;
        // 0x249adc: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AE0u;
        goto label_249ae0;
    }
    ctx->pc = 0x249AD8u;
    {
        const bool branch_taken_0x249ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD8u;
        // 0x249adc: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ad8) {
            ctx->pc = 0x249AE8u;
            goto label_249ae8;
        }
    }
    ctx->pc = 0x249AE0u;
label_249ae0:
    // 0x249ae0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x249ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_249ae4:
    // 0x249ae4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x249ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_249ae8:
    // 0x249ae8: 0xc62111d4  lwc1        $f1, 0x11D4($s1)
    ctx->pc = 0x249ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249aec:
    // 0x249aec: 0xc440245c  lwc1        $f0, 0x245C($v0)
    ctx->pc = 0x249aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249af0:
    // 0x249af0: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x249af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
label_249af4:
    // 0x249af4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_249af8:
    // 0x249af8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x249af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_249afc:
    // 0x249afc: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x249afcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249b00:
    // 0x249b00: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x249b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249b04:
    // 0x249b04: 0x0  nop
    ctx->pc = 0x249b04u;
    // NOP
label_249b08:
    // 0x249b08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_249b0c:
    if (ctx->pc == 0x249B0Cu) {
        ctx->pc = 0x249B10u;
        goto label_249b10;
    }
    ctx->pc = 0x249B08u;
    {
        const bool branch_taken_0x249b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249b08) {
            ctx->pc = 0x249B18u;
            goto label_249b18;
        }
    }
    ctx->pc = 0x249B10u;
label_249b10:
    // 0x249b10: 0x10000008  b           . + 4 + (0x8 << 2)
label_249b14:
    if (ctx->pc == 0x249B14u) {
        ctx->pc = 0x249B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B10u;
        // 0x249b14: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B18u;
        goto label_249b18;
    }
    ctx->pc = 0x249B10u;
    {
        const bool branch_taken_0x249b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B10u;
        // 0x249b14: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b10) {
            ctx->pc = 0x249B34u;
            goto label_249b34;
        }
    }
    ctx->pc = 0x249B18u;
label_249b18:
    // 0x249b18: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x249b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_249b1c:
    // 0x249b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249b20:
    // 0x249b20: 0x0  nop
    ctx->pc = 0x249b20u;
    // NOP
label_249b24:
    // 0x249b24: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x249b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249b28:
    // 0x249b28: 0x0  nop
    ctx->pc = 0x249b28u;
    // NOP
label_249b2c:
    // 0x249b2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_249b30:
    if (ctx->pc == 0x249B30u) {
        ctx->pc = 0x249B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B2Cu;
        // 0x249b30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B34u;
        goto label_249b34;
    }
    ctx->pc = 0x249B2Cu;
    {
        const bool branch_taken_0x249b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x249b2c) {
            ctx->pc = 0x249B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B2Cu;
            // 0x249b30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B34u;
            goto label_249b34;
        }
    }
    ctx->pc = 0x249B34u;
label_249b34:
    // 0x249b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_249b38:
    // 0x249b38: 0xc0bc9f8  jal         func_2F27E0
label_249b3c:
    if (ctx->pc == 0x249B3Cu) {
        ctx->pc = 0x249B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B38u;
        // 0x249b3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B40u;
        goto label_249b40;
    }
    ctx->pc = 0x249B38u;
    SET_GPR_U32(ctx, 31, 0x249B40u);
    ctx->pc = 0x249B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B38u;
    // 0x249b3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F27E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F27E0u, 0x249B38u, 0x249B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B40u;
label_249b40:
    // 0x249b40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x249b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_249b44:
    // 0x249b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249b48:
    // 0x249b48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249b4c:
    // 0x249b4c: 0xc0b15a0  jal         func_2C5680
label_249b50:
    if (ctx->pc == 0x249B50u) {
        ctx->pc = 0x249B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B4Cu;
        // 0x249b50: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B54u;
        goto label_249b54;
    }
    ctx->pc = 0x249B4Cu;
    SET_GPR_U32(ctx, 31, 0x249B54u);
    ctx->pc = 0x249B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B4Cu;
    // 0x249b50: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5680u, 0x249B4Cu, 0x249B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B54u;
label_249b54:
    // 0x249b54: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x249b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_249b58:
    // 0x249b58: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x249b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_249b5c:
    // 0x249b5c: 0xfa410030  sqc2        $vf1, 0x30($s2)
    ctx->pc = 0x249b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_249b60:
    // 0x249b60: 0xc0924f2  jal         func_2493C8
label_249b64:
    if (ctx->pc == 0x249B64u) {
        ctx->pc = 0x249B68u;
        goto label_249b68;
    }
    ctx->pc = 0x249B60u;
    SET_GPR_U32(ctx, 31, 0x249B68u);
    ctx->pc = 0x2493C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2493C8u, 0x249B60u, 0x249B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B68u;
label_249b68:
    // 0x249b68: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x249b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249b6c:
    // 0x249b6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x249b6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249b70:
    // 0x249b70: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x249b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_249b74:
    // 0x249b74: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x249b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_249b78:
    // 0x249b78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_249b7c:
    if (ctx->pc == 0x249B7Cu) {
        ctx->pc = 0x249B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B78u;
        // 0x249b7c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B80u;
        goto label_249b80;
    }
    ctx->pc = 0x249B78u;
    {
        const bool branch_taken_0x249b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B78u;
        // 0x249b7c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b78) {
            ctx->pc = 0x249BB8u;
            goto label_249bb8;
        }
    }
    ctx->pc = 0x249B80u;
label_249b80:
    // 0x249b80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x249b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249b84:
    // 0x249b84: 0x0  nop
    ctx->pc = 0x249b84u;
    // NOP
label_249b88:
    // 0x249b88: 0x4601b032  c.eq.s      $f22, $f1
    ctx->pc = 0x249b88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249b8c:
    // 0x249b8c: 0x0  nop
    ctx->pc = 0x249b8cu;
    // NOP
label_249b90:
    // 0x249b90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_249b94:
    if (ctx->pc == 0x249B94u) {
        ctx->pc = 0x249B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B90u;
        // 0x249b94: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B98u;
        goto label_249b98;
    }
    ctx->pc = 0x249B90u;
    {
        const bool branch_taken_0x249b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B90u;
        // 0x249b94: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b90) {
            ctx->pc = 0x249BACu;
            goto label_249bac;
        }
    }
    ctx->pc = 0x249B98u;
label_249b98:
    // 0x249b98: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x249b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249b9c:
    // 0x249b9c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x249b9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249ba0:
    // 0x249ba0: 0x0  nop
    ctx->pc = 0x249ba0u;
    // NOP
label_249ba4:
    // 0x249ba4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_249ba8:
    if (ctx->pc == 0x249BA8u) {
        ctx->pc = 0x249BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BA4u;
        // 0x249ba8: 0xe62110c0  swc1        $f1, 0x10C0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BACu;
        goto label_249bac;
    }
    ctx->pc = 0x249BA4u;
    {
        const bool branch_taken_0x249ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x249ba4) {
            ctx->pc = 0x249BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249BA4u;
            // 0x249ba8: 0xe62110c0  swc1        $f1, 0x10C0($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4288), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x249BB8u;
            goto label_249bb8;
        }
    }
    ctx->pc = 0x249BACu;
label_249bac:
    // 0x249bac: 0xc4401500  lwc1        $f0, 0x1500($v0)
    ctx->pc = 0x249bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249bb0:
    // 0x249bb0: 0xe62010c0  swc1        $f0, 0x10C0($s1)
    ctx->pc = 0x249bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4288), bits); }
label_249bb4:
    // 0x249bb4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x249bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_249bb8:
    // 0x249bb8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x249bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_249bbc:
    // 0x249bbc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x249bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_249bc0:
    // 0x249bc0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x249bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_249bc4:
    // 0x249bc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x249bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_249bc8:
    // 0x249bc8: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x249bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_249bcc:
    // 0x249bcc: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x249bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_249bd0:
    // 0x249bd0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x249bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_249bd4:
    // 0x249bd4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x249bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_249bd8:
    // 0x249bd8: 0x3e00008  jr          $ra
label_249bdc:
    if (ctx->pc == 0x249BDCu) {
        ctx->pc = 0x249BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BD8u;
        // 0x249bdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BE0u;
        goto label_fallthrough_0x249bd8;
    }
    ctx->pc = 0x249BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BD8u;
        // 0x249bdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249bd8:
    ctx->pc = 0x249BE0u;
}
